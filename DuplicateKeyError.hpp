#ifndef __DUPLICATE_KEY_ERROR_H__
#define __DUPLICATE_KEY_ERROR_H__

#include <exception>

#define DUPLICATE_KEY_ERROR_MESSAGE "Duplicate key.\n"

class DuplicateKeyError : public std::exception
{
	public:
		const char* what() const throw();
};

#endif 