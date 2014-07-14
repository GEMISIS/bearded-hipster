#ifndef _HASH_ITEM_H_
#define _HASH_ITEM_H_

#include <string>

class HashItem
{
public:
	void setValue(std::string value);
	const std::string getValue();
	void setKey(std::string key);
	const std::string getKey();
private:
	std::string key;
	std::string value;
};

#endif