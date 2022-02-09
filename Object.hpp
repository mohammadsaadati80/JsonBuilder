#ifndef __OBJECT_H__
#define __OBJECT_H__

#include "Container.hpp"

#define OPENED_BRACKET '{'
#define CLOSED_BRACKET '}'

class Object : public Container
{
	public:
		Object(int parantId, std::string key);
		Object(int parantId);

};

#endif 