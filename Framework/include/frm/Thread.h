/**
 * @file	Thread.h
 * @brief
 *
 *	(c) Copyright JinWoo Lee 2012
 */

#ifndef THREAD_H
#define THREAD_H

#include "frm/EventHandlerInterface.h"
#include "frm/ThreadStatus.h"

class ThreadImpl;

class Thread
{
	friend class Framework;
	friend class ThreadTest;

public:
	virtual ~Thread();
	void getThreadStatus( ThreadStatus * status );

private:
	Thread( EventHandlerInterface * eventHandler );
	ThreadImpl * pImpl;
};

#endif // THREAD_H

