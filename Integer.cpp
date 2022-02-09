#include "Integer.hpp"
using namespace std;

Integer::Integer(string _key, int _value)		
{
	key = _key;
	value = _value;
}

void Integer::print(int numberOfTabs)
{
	printTabs(numberOfTabs);
	cout << DOUBLE_QUOTATION << key << DOUBLE_QUOTATION << COLON << SPACE << value;
}