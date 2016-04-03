#pragma once

#include <string>
#include <exception>

namespace mfp
{
	class error : public std::exception
	{
	public:
		error(	const std::string& file, 
				long line,
				const std::string& function,
				const std::string& message);

		~error() throw();

		//! returns the error message.
		const char* what() const throw ();

	private:
		std::string format(	const std::string&	, 
							long 				, 
							const std::string&	, 
							const std::string&	);

		std::string * message_; 
	};
}
