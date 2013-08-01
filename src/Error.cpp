#include "Error.h"

Error::Error(): exception(), msg(SDL_GetError()) {}
Error::Error(const std::string& m): exception(), msg(m) {}
Error::~Error() throw() {}
const char* Error::what() const throw() {
	return msg.c_str();
}