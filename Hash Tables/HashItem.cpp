#include "HashItem.h"

void HashItem::setValue(std::string value)
{
	this->value = value;
}

const std::string HashItem::getValue()
{
	return this->value;
}

void HashItem::setKey(std::string key)
{
	this->key = key;
}

const std::string HashItem::getKey()
{
	return this->key;
}