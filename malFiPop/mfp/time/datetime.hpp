#pragma once

#include <boost/date_time.hpp>
#include <mfp/utilities/utilities.hpp>

namespace mfp
{
	class datetime
	{
	public:
		typedef boost::gregorian::date::year_type	years	;
		typedef boost::gregorian::date::month_type	months	;
		typedef boost::gregorian::date::day_type	days	;

		typedef long hours			;
		typedef long minutes		;
		typedef long seconds		;
		typedef long milliseconds	;
		typedef long microseconds	;

		// ctor
		datetime(	years y, months	M, days d, 
					hours			h  = 0, 
					minutes			m  = 0, 
					seconds			s  = 0, 
					milliseconds	ms = 0, 
					microseconds	us = 0)
		{
			MFP_REQUIRE(h  >= 0 && h  < 25	, "invalid datetime");
			MFP_REQUIRE(m  >= 0 && m  < 60	, "invalid datetime");
			MFP_REQUIRE(s  >= 0 && s  < 60	, "invalid datetime");
			MFP_REQUIRE(ms >= 0 && ms < 1000, "invalid datetime");
			MFP_REQUIRE(us >= 0 && us < 1000, "invalid datetime");
			
			datetime_ = boost::posix_time::ptime(
				boost::gregorian::date(y, M, d),
				boost::posix_time::hours(h)
				+ boost::posix_time::minutes(m)
				+ boost::posix_time::seconds(s)
				+ boost::posix_time::milliseconds(ms)
				+ boost::posix_time::microseconds(us));
		}

	private:
		boost::posix_time::ptime datetime_;
	};
}