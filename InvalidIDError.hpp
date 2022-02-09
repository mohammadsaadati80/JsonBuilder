#ifndef __INVALID_ID_ERROR_H__
#define __INVALID_ID_ERROR_H__

#include <exception>

#define INVALID_ID_ERROR_MESSAGE "Invalid id.\n"

class InvalidIDError : public std::exception
{
	public:
		const char* what() const throw();
};

#endif