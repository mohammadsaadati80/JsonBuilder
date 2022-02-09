#include "String.hpp"
using namespace std;

String::String(string _key, string _value)		
{
	key = _key;
	value = _value;
}

void String::print(int numberOfTabs)
{
	printTabs(numberOfTabs);
	cout << DOUBLE_QUOTATION << key << DOUBLE_QUOTATION << COLON << SPACE << DOUBLE_QUOTATION << value << DOUBLE_QUOTATION;
}