/*
* Copyright (C) 2009 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou@yahoo.fr>
*	
* This file is part of Open Source Doubango Framework.
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
*/

/**@file tsip_header_Allow_events.c
 * @brief SIP Allow-Events/u header.
 *
 * @author Mamadou Diop <diopmamadou(at)yahoo.fr>
 *
 * @date Created: Sat Nov 8 16:54:58 2009 mdiop
 */
#include "tinysip/headers/tsip_header_Allow_events.h"

#include "tinysip/parsers/tsip_parser_uri.h"

#include "tsk_debug.h"
#include "tsk_memory.h"

/**@defgroup tsip_header_Allow_events_group SIP Allow_events header.
*/

/***********************************
*	Ragel state machine.
*/
%%{
	machine tsip_machine_parser_header_Allow_events;

	# Includes
	include tsip_machine_utils "./tsip_machine_utils.rl";
	
	action tag
	{
		TSK_DEBUG_INFO("ALLOW_EVENTS:TAG");
		tag_start = p;
	}

	action parse_event
	{
		PARSER_ADD_STRING(hdr_allow_events->events);
	}

	action eob
	{
		TSK_DEBUG_INFO("ALLOW_EVENTS:EOB");
	}
	
	event_package = token_nodot;
	event_template = token_nodot;
	event_type = event_package ( "." event_template )*;

	Allow_Events = ( "Allow-Events"i | "u"i ) HCOLON event_type>tag %parse_event ( COMMA event_type>tag %parse_event )*;
	
	# Entry point
	main := Allow_Events :>CRLF @eob;

}%%



tsip_header_Allow_Events_t *tsip_header_Allow_Events_parse(const char *data, size_t size)
{
	int cs = 0;
	const char *p = data;
	const char *pe = p + size;
	const char *eof = pe;
	tsip_header_Allow_Events_t *hdr_allow_events = TSIP_HEADER_ALLOW_EVENTS_CREATE();
	
	const char *tag_start;

	%%write data;
	%%write init;
	%%write exec;
	
	if( cs < %%{ write first_final; }%% )
	{
		TSIP_HEADER_ALLOW_EVENTS_SAFE_FREE(hdr_allow_events);
	}
	
	return hdr_allow_events;
}







//========================================================
//	Allow_events header object definition
//

/**@ingroup tsip_header_Allow_events_group
*/
static void* tsip_header_Allow_Events_create(void *self, va_list * app)
{
	tsip_header_Allow_Events_t *Allow_events = self;
	if(Allow_events)
	{
		Allow_events->type = tsip_htype_Allow_Events;
	}
	else
	{
		TSK_DEBUG_ERROR("Failed to create new Allow_events header.");
	}
	return self;
}

/**@ingroup tsip_header_Allow_events_group
*/
static void* tsip_header_Allow_Events_destroy(void *self)
{
	tsip_header_Allow_Events_t *Allow_events = self;
	if(Allow_events)
	{
		TSK_LIST_SAFE_FREE(Allow_events->events);
	}
	else TSK_DEBUG_ERROR("Null Allow_events header.");

	return self;
}

static const tsk_object_def_t tsip_header_Allow_Events_def_s = 
{
	sizeof(tsip_header_Allow_Events_t),
	tsip_header_Allow_Events_create,
	tsip_header_Allow_Events_destroy,
	0
};
const void *tsip_header_Allow_Events_def_t = &tsip_header_Allow_Events_def_s;