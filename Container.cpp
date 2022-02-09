#include "Container.hpp"
using namespace std;

Container::Container(int _parantId)
{
	parantId = _parantId;
}

void Container::print(int numberOfTabs)
{
	printTabs(numberOfTabs);
	if (numberOfTabs != MAIN_OBJECT && key.size() != EMPTY)
		cout << DOUBLE_QUOTATION << key << DOUBLE_QUOTATION << COLON << SPACE;
	else if(numberOfTabs == MAIN_OBJECT)
			numberOfTabs = 0;
	cout << bracket[START];
	if (members.size() != 0)
	{
		cout << endl;
		for (int current = 0; current < members.size(); current++)
		{
			members[current]->print(numberOfTabs + 1);
			if (current != members.size() - 1)
				cout << COMMA;
			cout << endl;
		}
		printTabs(numberOfTabs);
	}
	cout << bracket[END];
}

void Container::addNewMember(JsonData *jsonData)
{
	members.push_back(jsonData);
}

void Container::checkDuplicateKeyError(string currentKey)
{
	for (string currentKey : memberKeys)
		if (key == currentKey)
			throw DuplicateKeyError();
	memberKeys.push_back(currentKey);
}