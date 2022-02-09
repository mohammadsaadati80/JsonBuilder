#ifndef __UNDEFINED_TYPE_ERROR_H__
#define __UNDEFINED_TYPE_ERROR_H__

#include <exception>

#define UNDEFINED_TYPE_ERROR_MESSAGE "Undefined type.\n"

class UndefinedTypeError : public std::exception
{
	public:
		const char* what() const throw();
};

#endif