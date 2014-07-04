#ifndef _HASH_TABLE_H_
#define _HASH_TABLE_H_

#include "HashItem.h"

#define STARTING_SIZE 256

class HashTable
{
public:
	HashTable();
	HashTable(int startingSize);

	void addItem(int key, std::string value);
	const std::string getValue(int key);

private:
	HashItem* items;
	int size;

	int getHash(int key);
};

#endif