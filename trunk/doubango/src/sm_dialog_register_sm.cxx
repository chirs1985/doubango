/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : sm_dialog_register.sm
 */


///****************************************************************************
//			 _             _                             
//			| |           | |                            
//		  _ | | ___  _   _| | _   ____ ____   ____  ___  
//		 / || |/ _ \| | | | || \ / _  |  _ \ / _  |/ _ \ 
//		( (_| | |_| | |_| | |_) | ( | | | | ( ( | | |_| |
//		 \____|\___/ \____|____/ \_||_|_| |_|\_|| |\___/ 
//											(_____|   
//	
//	Copyright (C) 2009 xxxyyyzzz <imsframework(at)gmail.com>
//
//	This file is part of Open Source Doubango IMS Client Framework project.
//
//    DOUBANGO is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//	
//    DOUBANGO is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU Lesser General Public License for more details.
//	
//    You should have received a copy of the GNU General Public License
//    along with DOUBANGO.
//****************************************************************************/


#include "sip_dialog_register.h"
#include "..\..\doubango\src\sm_dialog_register_sm.h"

using namespace statemap;

namespace dgo
{
    // Static class declarations.
    map_dialog_register_Initialized map_dialog_register::Initialized("map_dialog_register::Initialized", 0);
    map_dialog_register_Trying map_dialog_register::Trying("map_dialog_register::Trying", 1);
    map_dialog_register_Established map_dialog_register::Established("map_dialog_register::Established", 2);
    map_dialog_register_Authentifying map_dialog_register::Authentifying("map_dialog_register::Authentifying", 3);
    map_dialog_register_Terminated map_dialog_register::Terminated("map_dialog_register::Terminated", 4);

    void sip_dialog_registerState::sm_1xx_response(sip_dialog_registerContext& context)
    {
        Default(context);
        return;
    }

    void sip_dialog_registerState::sm_2xx_response(sip_dialog_registerContext& context, bool unreg)
    {
        Default(context);
        return;
    }

    void sip_dialog_registerState::sm_3xx_response(sip_dialog_registerContext& context)
    {
        Default(context);
        return;
    }

    void sip_dialog_registerState::sm_401_407_421_494_response(sip_dialog_registerContext& context)
    {
        Default(context);
        return;
    }

    void sip_dialog_registerState::sm_4xx_response(sip_dialog_registerContext& context)
    {
        Default(context);
        return;
    }

    void sip_dialog_registerState::sm_5xx_response(sip_dialog_registerContext& context)
    {
        Default(context);
        return;
    }

    void sip_dialog_registerState::sm_6xx_response(sip_dialog_registerContext& context)
    {
        Default(context);
        return;
    }

    void sip_dialog_registerState::sm_authentificationSent(sip_dialog_registerContext& context)
    {
        Default(context);
        return;
    }

    void sip_dialog_registerState::sm_cancelSent(sip_dialog_registerContext& context)
    {
        Default(context);
        return;
    }

    void sip_dialog_registerState::sm_registerSent(sip_dialog_registerContext& context)
    {
        Default(context);
        return;
    }

    void sip_dialog_registerState::sm_unregisterSent(sip_dialog_registerContext& context)
    {
        Default(context);
        return;
    }

    void sip_dialog_registerState::sm_xxx_response(sip_dialog_registerContext& context)
    {
        Default(context);
        return;
    }

    void sip_dialog_registerState::Default(sip_dialog_registerContext& context)
    {
        assert(1==0);

        return;
    }

    void map_dialog_register_Default::sm_401_407_421_494_response(sip_dialog_registerContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_register::Authentifying);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_register_Default::sm_3xx_response(sip_dialog_registerContext& context)
    {


        return;
    }

    void map_dialog_register_Default::sm_4xx_response(sip_dialog_registerContext& context)
    {


        return;
    }

    void map_dialog_register_Default::sm_5xx_response(sip_dialog_registerContext& context)
    {


        return;
    }

    void map_dialog_register_Default::sm_6xx_response(sip_dialog_registerContext& context)
    {


        return;
    }

    void map_dialog_register_Default::sm_xxx_response(sip_dialog_registerContext& context)
    {


        return;
    }

    void map_dialog_register_Default::Default(sip_dialog_registerContext& context)
    {


        return;
    }

    void map_dialog_register_Initialized::Entry(sip_dialog_registerContext& context)

{
        sip_dialog_register& ctxt(context.getOwner());

        ctxt.OnStateChanged(srs_none);
        return;
    }

    void map_dialog_register_Initialized::sm_registerSent(sip_dialog_registerContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_register::Trying);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_register_Trying::Entry(sip_dialog_registerContext& context)

{
        sip_dialog_register& ctxt(context.getOwner());

        ctxt.OnStateChanged(srs_trying);
        return;
    }

    void map_dialog_register_Trying::Default(sip_dialog_registerContext& context)
    {


        return;
    }

    void map_dialog_register_Trying::sm_1xx_response(sip_dialog_registerContext& context)
    {


        return;
    }

    void map_dialog_register_Trying::sm_2xx_response(sip_dialog_registerContext& context, bool unreg)
    {

        if (unreg == true)
        {
            (context.getState()).Exit(context);
            // No actions.
            context.setState(map_dialog_register::Terminated);
            (context.getState()).Entry(context);
        }
        else if (unreg == false)
    
    {
            (context.getState()).Exit(context);
            // No actions.
            context.setState(map_dialog_register::Established);
            (context.getState()).Entry(context);
        }        else
        {
             map_dialog_register_Default::sm_2xx_response(context, unreg);
        }

        return;
    }

    void map_dialog_register_Trying::sm_3xx_response(sip_dialog_registerContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_register::Terminated);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_register_Trying::sm_401_407_421_494_response(sip_dialog_registerContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_register::Authentifying);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_register_Trying::sm_4xx_response(sip_dialog_registerContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_register::Terminated);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_register_Trying::sm_5xx_response(sip_dialog_registerContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_register::Terminated);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_register_Trying::sm_6xx_response(sip_dialog_registerContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_register::Terminated);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_register_Trying::sm_cancelSent(sip_dialog_registerContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_register::Terminated);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_register_Trying::sm_xxx_response(sip_dialog_registerContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_register::Terminated);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_register_Established::Entry(sip_dialog_registerContext& context)

{
        sip_dialog_register& ctxt(context.getOwner());

        ctxt.OnStateChanged(srs_registered);
        return;
    }

    void map_dialog_register_Established::Default(sip_dialog_registerContext& context)
    {


        return;
    }

    void map_dialog_register_Established::sm_1xx_response(sip_dialog_registerContext& context)
    {


        return;
    }

    void map_dialog_register_Established::sm_2xx_response(sip_dialog_registerContext& context, bool unreg)
    {

        if (unreg == true)
        {
            (context.getState()).Exit(context);
            // No actions.
            context.setState(map_dialog_register::Terminated);
            (context.getState()).Entry(context);
        }
        else if (unreg == false)
    
    {
            // No actions.
        }        else
        {
             map_dialog_register_Default::sm_2xx_response(context, unreg);
        }

        return;
    }

    void map_dialog_register_Established::sm_401_407_421_494_response(sip_dialog_registerContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_register::Authentifying);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_register_Established::sm_unregisterSent(sip_dialog_registerContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_register::Trying);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_register_Established::sm_xxx_response(sip_dialog_registerContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_register::Terminated);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_register_Authentifying::Entry(sip_dialog_registerContext& context)

{
        sip_dialog_register& ctxt(context.getOwner());

        ctxt.OnStateChanged(srs_authentifying);
        return;
    }

    void map_dialog_register_Authentifying::Default(sip_dialog_registerContext& context)
    {


        return;
    }

    void map_dialog_register_Authentifying::sm_1xx_response(sip_dialog_registerContext& context)
    {


        return;
    }

    void map_dialog_register_Authentifying::sm_2xx_response(sip_dialog_registerContext& context, bool unreg)
    {

        if (unreg == true)
        {
            (context.getState()).Exit(context);
            // No actions.
            context.setState(map_dialog_register::Terminated);
            (context.getState()).Entry(context);
        }
        else if (unreg == false)
    
    {
            (context.getState()).Exit(context);
            // No actions.
            context.setState(map_dialog_register::Established);
            (context.getState()).Entry(context);
        }        else
        {
             map_dialog_register_Default::sm_2xx_response(context, unreg);
        }

        return;
    }

    void map_dialog_register_Authentifying::sm_authentificationSent(sip_dialog_registerContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_register::Trying);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_register_Authentifying::sm_xxx_response(sip_dialog_registerContext& context)
    {

        (context.getState()).Exit(context);
        context.setState(map_dialog_register::Terminated);
        (context.getState()).Entry(context);

        return;
    }

    void map_dialog_register_Terminated::Entry(sip_dialog_registerContext& context)

{
        sip_dialog_register& ctxt(context.getOwner());

        ctxt.OnStateChanged(srs_unregistered);
        return;
    }

    void map_dialog_register_Terminated::Default(sip_dialog_registerContext& context)
    {


        return;
    }
}

/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */