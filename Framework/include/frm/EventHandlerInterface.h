/**
 * @file	EventHandlerInterface.h
 * @brief
 *
 *	(c) Copyright JinWoo Lee 2013
 */

#ifndef EVENTHANDLERINTERFACE_H
#define EVENTHANDLERINTERFACE_H

#include "frm/Event.h"

class EventHandlerInterface
{
public:
	virtual void OnEvent( Event * event ) = 0;
};

#endif // EVENTHANDLERINTERFACE_H

