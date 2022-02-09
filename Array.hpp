#ifndef __ARRAY_H__
#define __ARRAY_H__

#include "Container.hpp"

#define OPENED_SQUARE_BRACKET '['
#define CLOSED_SQUARE_BRACKET ']'

class Array : public Container
{
	public:
		Array(int parantId, std::string key);
		Array(int parantId);

};

#endif 