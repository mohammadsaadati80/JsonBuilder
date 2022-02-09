#ifndef __STRING_H__
#define __STRING_H__

#include "JsonData.hpp"

class String : public JsonData
{
	public:
		String(std::string key, std::string value);
		void print(int numberOfTabs = 0);

	private:
		std::string key;
		std::string value;

};

#endif 
