#ifndef __CONTAINER_H__
#define __CONTAINER_H__

#include "JsonData.hpp"
#include "DuplicateKeyError.hpp"

#define MAIN_OBJECT -1
#define EMPTY 0
#define COMMA ","
#define START 0
#define END 1

class Container : public JsonData
{
	public:
		Container(int parantId);
		void print(int numberOfTabs = 0);
		void addNewMember(JsonData *jsonData);
		void checkDuplicateKeyError(std::string currentKey);

	private:
		int parantId;
		std::vector<std::string> memberKeys;

	protected:
		std::vector<JsonData*> members;
		std::string key;
		char bracket[2];

};

#endif 