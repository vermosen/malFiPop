#pragma once

#include <map>
#include <mfp/time/datetime.hpp>

namespace mfp
{
	// TODO: turn it into a generic class with T as datetime
	template <typename T>
	class timeseries
	{
	public:
		void insert(const datetime & dt, const T & val);

	private:
		std::map<datetime, T> map_;
	};
}
