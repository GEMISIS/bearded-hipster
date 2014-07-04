/***************************************************
A simple test program for hash tables.  This program
does not do any error checking!  It is simply a test
for creating a hash table like data structure and does
nothing more!  It does not do collision detection!

Created by: Gerald McAlister
***************************************************/

#include <iostream>
#include <string>

#include "HashTable.h"

using namespace std;

int main()
{
	HashTable* table = new HashTable();

	int key = 0;
	string value = "";
	while (value != "done")
	{
		cout << "Enter a key: ";
		cin >> key;
		cout << "Enter a value: ";
		cin >> value;
		cout << "Key: " << key << " Value: " << value << "\n";
		table->addItem(key, value);
	}
	cout << "\n" << "Enter -1 to quit!" << "\n" << "\n";
	while (key > -1)
	{
		cout << "Enter a key to find the value to: ";
		cin >> key;
		if (key > -1)
		{
			cout << "Value associated with key " << key << ": " << table->getValue(key).c_str() << "\n";
		}
	}
	return 0;
}