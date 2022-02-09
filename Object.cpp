#include "Object.hpp"
using namespace std;

Object::Object(int parantId, std::string key)
		: Container::Container(parantId)
{
	Container::key = key;
	bracket[START] = OPENED_BRACKET;
	bracket[END] = CLOSED_BRACKET;
}

Object::Object(int parantId)
		: Container(parantId)
{
	bracket[START] = OPENED_BRACKET;
	bracket[END] = CLOSED_BRACKET;
}