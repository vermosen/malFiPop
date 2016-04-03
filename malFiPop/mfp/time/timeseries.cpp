#pragma once

#include <mfp/time/timeseries.hpp>

namespace mfp
{
	template<typename T>
	void timeseries<T>::insert(const datetime & dt, const T & val)
	{
		map_.insert(std::pair<datetime, T>(dt, val));
	}
}


