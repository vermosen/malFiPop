#pragma once

#include <boost/assert.hpp>
#include <boost/current_function.hpp>
#include <boost/shared_ptr.hpp>
#include <exception>
#include <sstream>
#include <string>

#include <mfp/error.hpp>

namespace mfp
{
	#define MFP_REQUIRE(condition,message) \
	if (!(condition)) { \
		std::ostringstream os; \
		os << message; \
		throw error(__FILE__,__LINE__, \
			BOOST_CURRENT_FUNCTION,os.str()); \
	} else 
}
