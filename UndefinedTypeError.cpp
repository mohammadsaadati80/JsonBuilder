#include "UndefinedTypeError.hpp"
using namespace std;

const char* UndefinedTypeError::what() const throw()
{
	return UNDEFINED_TYPE_ERROR_MESSAGE;
}