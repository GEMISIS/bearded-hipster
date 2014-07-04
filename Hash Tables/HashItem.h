#ifndef _HASH_ITEM_H_
#define _HASH_ITEM_H_

#include <string>

class HashItem
{
public:
	void setValue(std::string value);
	const std::string getValue();
	void setKey(int key);
	const int getKey();
private:
	int key;
	std::string value;
};

#endif