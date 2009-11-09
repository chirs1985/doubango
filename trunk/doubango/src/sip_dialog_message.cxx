/**
* @file
* @author  xxxyyyzzz <imsframework(at)gmail.com>
* @version 1.0
*
* @section LICENSE
*
*	
* This file is part of Open Source Doubango IMS Client Framework project.
*
* DOUBANGO is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*	
* DOUBANGO is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU Lesser General Public License for more details.
*	
* You should have received a copy of the GNU General Public License
* along with DOUBANGO.
*
* @section DESCRIPTION
*
*
*/
#include "sip_dialog_message.h"
#include "api_stack.h"

PREF_NAMESPACE_START

/* sip_dialog_message constructor*/
sip_dialog_message::sip_dialog_message(stack* stk, const char* _dest_address, const char* _content_type, const char* _content)
:sip_dialog(stk),sm_ctx(*this)
{
	this->dest_address = su_strdup(this->stk->get_home(), _dest_address);
	this->content_type = su_strdup(this->stk->get_home(), _content_type);
	this->content = su_strdup(this->stk->get_home(), _content);
}

/* sip_dialog_message destructor */
sip_dialog_message::~sip_dialog_message()
{
	// FIXME: destroy handle
	su_free(this->stk->get_home(), this->dest_address);
	su_free(this->stk->get_home(), this->content_type);
	su_free(this->stk->get_home(), this->content);
}

/* start sending MESSAGE */
ERR sip_dialog_message::Start()
{
	this->sm_ctx.enterStartState();

	this->handle = nua_handle(this->stk->get_nua(), this->stk->get_home(), TAG_END());

	if(!this->handle)
	{
		return ERR_GLOBAL_FAILURE;
	}

	return this->sendMessage();
}

/* terminate/stop dialog */
ERR sip_dialog_message::Stop()
{
	return ERR_NOT_IMPLEMENTED;
}

/* dialog state changed */
void sip_dialog_message::OnStateChanged(SIP_STATE state)
{
	//sip_dialog::OnStateChanged(state);
}

/* get sip method */
inline const char* sip_dialog_message::get_sipmethod()const
{
	return "MESSAGE";
}

/* send sip MESSAGE request*/
ERR sip_dialog_message::sendMessage()
{
	if(!this->handle) return ERR_SIP_DIALOG_UNKNOWN;

	nua_message(this->handle, 
				SIPTAG_TO_STR(this->dest_address),
				SIPTAG_FROM_STR(this->stk->get_public_id()),
				SIPTAG_CONTENT_TYPE_STR(this->content_type),
				SIPTAG_PAYLOAD_STR(this->content),
				TAG_END());

	this->sm_ctx.sm_messageSent();

	return ERR_SUCCESS;
}

/* returns true if terminated and false otherwise*/
inline bool sip_dialog_message::get_terminated()const
{
	return false;
	//return (this->state_current == SS_MESSAGE_TERMINATED);
}

/* dialog callback */
void sip_dialog_message::dialog_callback(nua_event_t _event,
		       int status, char const *phrase,
		       nua_t *nua, nua_magic_t *magic,
		       nua_handle_t *nh, nua_hmagic_t *hmagic,
		       sip_t const *sip,
		       tagi_t tags[])
{
	switch(_event)
	{
	case nua_r_message:
		{
			if(status <200) this->sm_ctx.sm_1xx_response();
			else if(status <300) this->sm_ctx.sm_2xx_response();
			else if(status == 401 || status == 407 || status == 421 || status == 494) 
			{
				this->sm_ctx.sm_401_407_421_494_response();
				this->authenticate(nh, sip);
				this->sm_ctx.sm_authentificationSent();
			}
			else this->sm_ctx.sm_xxx_response();
			
			break;
		}

	default:
		{
			break;
		}
	}
}


PREF_NAMESPACE_END