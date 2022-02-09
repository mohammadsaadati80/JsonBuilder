#ifndef __JSON_DATA_H__
#define __JSON_DATA_H__

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <cmath>
#include <iomanip>

#define TAB "    "
#define SPACE ' '
#define DOUBLE_QUOTATION '"'
#define COLON ':'

class JsonData 
{
	public:
		JsonData();
		virtual void print(int numberOfTabs = 0) = 0;
	
	protected:
		void printTabs(int numberOfTabs);
	
};

#endif