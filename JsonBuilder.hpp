#ifndef __JSON_BUILDER_H__
#define __JSON_BUILDER_H__

#include <map>
#include "JsonData.hpp"
#include "Container.hpp"
#include "String.hpp"
#include "Array.hpp"
#include "Object.hpp"
#include "Integer.hpp"
#include "IntegerInArray.hpp"
#include "StringInArray.hpp"
#include "InvalidIDError.hpp"
#include "UndefinedTypeError.hpp"
#include "DuplicateKeyError.hpp"

#define ARRAY_TYPE "array"
#define OBJECT_TYPE "object"
#define MAIN_KEY ""
#define MAIN 0
#define NEXT_NEW_ID 1

struct AllContainers
{
	std::map<int, Container*> containersObject;
	std::map<int, Container*> containersArray;
};

class JsonBuilder
{
    public:
		JsonBuilder();
        void addStringToObject(int parentId, std::string key, std::string value);
        void addIntegerToObject(int parentId, std::string key, int value);
        int addContainerToObject(int parentId, std::string key, std::string type);
        void addStringToArray(int parentId, std::string value);
        void addIntegerToArray(int parentId, int value);
        int addContainerToArray(int parentId, std::string type);
        void print(int id);

	private:
		AllContainers allContainers;
		Object* mainData;
		int createNewId();
		std::vector<std::pair<int, std::string>> usedKeys;
		Container* findObjectParentId(int parentId);
		Container* findArrayParentId(int parentId);

};

#endif 