#include "JsonData.hpp"
using namespace std;

JsonData::JsonData() {}

void JsonData::printTabs(int numberOfTabs)
{
	for (int current = 0; current < numberOfTabs; current++)
		cout << TAB;
}
