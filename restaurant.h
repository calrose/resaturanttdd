#pragma once
#include <string>
#include <iostream>

using namespace std;

class Test
{
public:

	Test();
	//~MyClass();
	string getName();
	string setName(string name);
private:
	string name;
};
