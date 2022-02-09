#include "StringInArray.hpp"
using namespace std;

StringInArray::StringInArray(std::string _value)
{
	value = _value;
}

void StringInArray::print(int numberOfTabs)
{
	printTabs(numberOfTabs);
	cout << DOUBLE_QUOTATION << value << DOUBLE_QUOTATION;
}