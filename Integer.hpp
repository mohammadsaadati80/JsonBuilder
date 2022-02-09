#ifndef __INTEGER_H__
#define __INTEGER_H__

#include "JsonData.hpp"

class Integer : public JsonData
{
	public:
		Integer(std::string key, int value);
		void print(int numberOfTabs = 0);

	private:
		std::string key;
		int value;

};

#endif