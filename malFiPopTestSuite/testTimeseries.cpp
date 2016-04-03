#include "stdafx.h"
#include "CppUnitTest.h"
#include <mfp/time/timeseries.hpp>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace malFiPopTestSuite
{		
	TEST_CLASS(testTimeseries)
	{
	public:
		
		TEST_METHOD(testNewDelete)
		{
			mfp::timeseries<double> * ts = new mfp::timeseries<double>();
			delete ts;
		}

		TEST_METHOD(testInsert)
		{
			mfp::timeseries<double> ts;
			ts.insert(mfp::datetime(2010, 1, 1), 3.01);
			ts.insert(mfp::datetime(2010, 1, 2), 3.03);
			ts.insert(mfp::datetime(2010, 1, 3), 3.07);
			ts.insert(mfp::datetime(2010, 1, 4), 3.00);
			ts.insert(mfp::datetime(2010, 1, 5), 3.01);
		}
	};
}