#include "stdafx.h"
#include "CppUnitTest.h"
#include <mfp/time/datetime.hpp>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace malFiPopTestSuite
{		
	TEST_CLASS(testDatetime)
	{
	public:
		TEST_METHOD(testNewDelete)
		{
			mfp::datetime * ptr = new mfp::datetime(2010, 01, 01);
			delete ptr;
		}
	};
}