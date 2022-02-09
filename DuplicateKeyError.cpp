#include "DuplicateKeyError.hpp"
using namespace std;

const char* DuplicateKeyError::what() const throw()
{
	return DUPLICATE_KEY_ERROR_MESSAGE;
}