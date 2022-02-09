#ifndef __INTEGER_IN_ARRAY_H__
#define __INTEGER_IN_ARRAY_H__

#include "JsonData.hpp"

class IntegerInArray : public JsonData
{
	public:
		IntegerInArray(int value);
		void print(int numberOfTabs = 0);

	private:
		int value;

};

#endif 