#include "HashTable.h"

HashTable::HashTable()
{
	this->items = new HashItem[STARTING_SIZE];
	this->size = STARTING_SIZE;
}
HashTable::HashTable(int startingSize)
{
	this->items = new HashItem[startingSize];
	this->size = startingSize;
}

void HashTable::addItem(std::string key, std::string value)
{
	int hashedKey = this->getHash(key.c_str());

	if (this->items[hashedKey].getKey() == "")
	{
		this->items[hashedKey].setKey(key);
		this->items[hashedKey].setValue(value);
	}
}

const std::string HashTable::getValue(std::string key)
{
	int hashedKey = this->getHash(key.c_str());

	return this->items[hashedKey].getValue();
}

int HashTable::getHash(const char* key)
{
	// First two prime numbers ared used in calculating the hash.
	unsigned int primeA = 3;
	unsigned int primeB = 5;

	// The hash also should start as a prime number.  This helps with generating unique
	// keys.
	unsigned int hash = 31;
	while (*key)
	{
		hash = (hash * primeA) ^ (key[0] * primeB);
		key += 1;
	}
	return hash % STARTING_SIZE;
}