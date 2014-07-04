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

void HashTable::addItem(int key, std::string value)
{
	int hashedKey = this->getHash(key);

	this->items[hashedKey].setKey(key);
	this->items[hashedKey].setValue(value);
}

const std::string HashTable::getValue(int key)
{
	int hashedKey = this->getHash(key);

	return this->items[hashedKey].getValue();
}

int HashTable::getHash(int key)
{
	// Note taht get hash here does nothing special at all and simply
	// returns the key.  Normally, you would actually hash a string (or
	// other object) here and use the integer value for that.  I may
	// update this in the future with such a design, but for now I am
	// simply doing this out of laziness.....
	return key;
}