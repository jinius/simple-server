/**
 * @file	ThreadTest.cpp
 * @brief
 *
 *	(c) Copyright JinWoo Lee 2013
 */

#include "gtest/gtest.h"
#include "frm/EventHandlerInterface.h"
#include "frm/Thread.h"

class TestEventHandler : public EventHandlerInterface
{
public:
	virtual void OnEvent( Event * event )
	{
	}
};

class ThreadTest : public testing::Test
{
protected:
	virtual void SetUp()
	{
		mThread = new Thread( &mEventHandler );
	}

	virtual void TearDown()
	{
		delete mThread;
	}

	TestEventHandler	mEventHandler;
	Thread *			mThread;
};

TEST_F( ThreadTest, test )
{
	FAIL();
}

