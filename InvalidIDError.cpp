#include "InvalidIDError.hpp"
using namespace std;

const char* InvalidIDError::what() const throw()
{
	return INVALID_ID_ERROR_MESSAGE;
}