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

#ifndef __DOUBANGO_DIALOG_SUBSCRIBE_SM_H__
#define __DOUBANGO_DIALOG_SUBSCRIBE_SM_H__

#include "pref.h"
#include "sip_dialog.h"
#include "sm_dialog_subscribe_sm.h"

PREF_NAMESPACE_START

/* SUBSCRIBE */
class sip_dialog_subscribe : public sip_dialog
{
public:
	sip_dialog_subscribe(stack* stk, const char* dest_address, const char* eventpackg, const char* allow, bool eventlist);
	~sip_dialog_subscribe();

	/* sip_dialog override*/
	ERR Start();
	ERR Stop();
	void OnStateChanged(SIP_STATE state);
	inline const char* get_sipmethod()const;
	inline bool get_terminated()const;
	void dialog_callback(nua_event_t event,
			       int status, char const *phrase,
			       nua_t *nua, nua_magic_t *magic,
			       nua_handle_t *nh, nua_hmagic_t *hmagic,
			       sip_t const *sip,
			       tagi_t tags[]);
private:
	ERR sendSubscribe();
	ERR sendUnsubscribe();
	ERR sendCancel();

private:
	sip_dialog_subscribeContext sm_ctx;

	char* dest_address;
	char* eventpackg;
	char* allow;
	bool eventlist;
};

PREF_NAMESPACE_END

#endif /* __DOUBANGO_DIALOG_SUBSCRIBE_SM_H__ */