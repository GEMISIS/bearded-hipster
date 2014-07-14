#ifndef _HASH_TABLE_H_
#define _HASH_TABLE_H_

#include "HashItem.h"

// Best to keep this as a prime number for easy hash calculations.
#define STARTING_SIZE 251

class HashTable
{
public:
	HashTable();
	HashTable(int startingSize);

	void addItem(std::string key, std::string value);
	const std::string getValue(std::string key);

private:
	HashItem* items;
	int size;

	int getHash(const char* key);
};

#endif