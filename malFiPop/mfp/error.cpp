#pragma once

#include <mfp/error.hpp>
#include <sstream>

namespace mfp
{
	error::error(	const std::string& file, 
					long line,
					const std::string& function,
					const std::string& message) 
	{
		message_ = new std::string(
			format(file, line, function, message));
	}

	error::~error()
	{
		delete message_;
	}

	const char* error::what() const throw () {
		return message_->c_str();
	}

	std::string error::format(	const std::string&	file	,
								long				line	,
								const std::string&	function,
								const std::string&	message	)
	{
		std::ostringstream msg;

		#if defined(_DEBUG) && defined(_MSC_VER)
		if (function != "(unknown)") 
			msg << function << ": ";
		msg << "\n  " << file << "(" << line << "): \n";
		#endif

		msg << message;

		return msg.str();
	}
}
