/**
 * @file	frm/Thread.cpp
 * @brief
 *
 *	(c) Copyright JinWoo Lee 2013
 */

#include "frm/Thread.h"

// ThreadImpl
class ThreadImpl
{
	friend class Thread;

private:
	ThreadImpl( EventHandlerInterface * eventHandler )
		: mEventHandler( eventHandler )
	{}

	EventHandlerInterface * mEventHandler;
};

// Thread
Thread::Thread( EventHandlerInterface * eventHandler )
{
	pImpl = new ThreadImpl( eventHandler );
}

Thread::~Thread()
{
	delete pImpl;
}

void Thread::getThreadStatus( ThreadStatus * status )
{
}

