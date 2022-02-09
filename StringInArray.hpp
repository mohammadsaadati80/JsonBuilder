#ifndef __STRING_IN_ARRAY_H__
#define __STRING_IN_ARRAY_H__

#include "JsonData.hpp"

class StringInArray : public JsonData
{
	public:
		StringInArray(std::string value);
		void print(int numberOfTabs = 0);

	private:
		std::string value;

};

#endif 