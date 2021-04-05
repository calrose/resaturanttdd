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

Test::Test()
{
	name = "";
}


string Test::getName()
{
	return name;
}

string Test::setName(string rName)
{
	name = rName;
	return name;
}
