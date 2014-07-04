#include "HashItem.h"

void HashItem::setValue(std::string value)
{
	this->value = value;
}

const std::string HashItem::getValue()
{
	return this->value;
}

void HashItem::setKey(int key)
{
	this->key = key;
}

const int HashItem::getKey()
{
	return this->key;
}