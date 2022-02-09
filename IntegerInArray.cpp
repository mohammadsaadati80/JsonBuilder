#include "IntegerInArray.hpp"
using namespace std;

IntegerInArray::IntegerInArray(int _value) 
{
	value = _value;
}

void IntegerInArray::print(int numberOfTabs)
{
	printTabs(numberOfTabs);
	cout << value;
}