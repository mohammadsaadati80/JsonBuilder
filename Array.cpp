#include "Array.hpp"
using namespace std;

Array::Array(int parantId, std::string key)
		: Container::Container(parantId)
{
	Container::key = key;
	bracket[START] = OPENED_SQUARE_BRACKET;
	bracket[END] = CLOSED_SQUARE_BRACKET;
}

Array::Array(int parantId)
		: Container(parantId)
{
	bracket[START] = OPENED_SQUARE_BRACKET;
	bracket[END] = CLOSED_SQUARE_BRACKET;
}