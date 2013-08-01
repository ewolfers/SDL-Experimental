#ifndef _ERROR_H_
#define _ERROR_H_

#include <exception>
#include <string>
#include "SDL2/SDL.h"

class Error: public std::exception {
	public:
		Error();
		Error(const std::string&);
		virtual ~Error() throw();
		virtual const char* what() const throw();
	private:
		std::string msg;
};

#endif