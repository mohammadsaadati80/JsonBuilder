#include "JsonBuilder.hpp"
using namespace std;

JsonBuilder::JsonBuilder()
{
	mainData = new Object(MAIN, MAIN_KEY);
	allContainers.containersObject.insert(pair<int, Container*>(MAIN, mainData));
	usedKeys.push_back(pair<int, std::string>(MAIN, MAIN_KEY));
}

void JsonBuilder::addStringToObject(int parentId, string key, string value)
{
	Container *currentContainer = findObjectParentId(parentId);
	currentContainer->checkDuplicateKeyError(key);
	String *newString = new String(key, value);
	currentContainer->addNewMember(newString);
}

void JsonBuilder::addIntegerToObject(int parentId, string key, int value)
{
	Container *currentContainer = findObjectParentId(parentId);
	currentContainer->checkDuplicateKeyError(key);
	Integer *newInteger = new Integer(key, value);
	currentContainer->addNewMember(newInteger);
}

int JsonBuilder::addContainerToObject(int parentId, string key, string type)
{
	Container *currentContainer = findObjectParentId(parentId);
	currentContainer->checkDuplicateKeyError(key);
	Container *newContainer;
	int newParantId = createNewId();
	if (type == OBJECT_TYPE)
	{
		newContainer = new Object(newParantId, key);
		allContainers.containersObject.insert(pair<int, Container*>(newParantId, newContainer));
	}
	else if (type == ARRAY_TYPE)
	{
		newContainer = new Array(newParantId, key);
		allContainers.containersArray.insert(pair<int, Container*>(newParantId, newContainer));
	}
	else
		throw UndefinedTypeError();
	currentContainer->addNewMember(newContainer);
	return newParantId;
}

void JsonBuilder::addStringToArray(int parentId, string value)
{
	Container *currentContainer = findArrayParentId(parentId);
	StringInArray *newStringInArray = new StringInArray(value);
	currentContainer->addNewMember(newStringInArray);
}

void JsonBuilder::addIntegerToArray(int parentId, int value)
{
	Container *currentContainer = findArrayParentId(parentId);
	IntegerInArray *newIntegerInArray = new IntegerInArray(value);
	currentContainer->addNewMember(newIntegerInArray);
}

int JsonBuilder::addContainerToArray(int parentId, string type)
{
	Container *currentContainer = findArrayParentId(parentId);
	Container *newContainer;
	int newParantId = createNewId();
	if (type == OBJECT_TYPE)
	{
		newContainer = new Object(newParantId);
		allContainers.containersObject.insert(pair<int, Container*>(newParantId, newContainer));
	}
	else if (type == ARRAY_TYPE)
	{
		newContainer = new Array(newParantId);
		allContainers.containersArray.insert(pair<int, Container*>(newParantId, newContainer));
	}
	else
		throw UndefinedTypeError();
	currentContainer->addNewMember(newContainer);
	return newParantId;
}

void JsonBuilder::print(int id)
{
	Container *currentContainer = findObjectParentId(id);
	currentContainer->print(MAIN_OBJECT);
	cout << endl;
}

int JsonBuilder::createNewId()
{
	return (allContainers.containersObject.size() + allContainers.containersArray.size()) + NEXT_NEW_ID;
}

Container *JsonBuilder::findObjectParentId(int parentId)
{
	for (pair<int, Container*> current : allContainers.containersObject)
		if (current.first == parentId)
			return current.second;
	throw InvalidIDError();
}

Container *JsonBuilder::findArrayParentId(int parentId)
{
	for (pair<int, Container*> current : allContainers.containersArray)
		if (current.first == parentId)
			return current.second;
	throw InvalidIDError();
}