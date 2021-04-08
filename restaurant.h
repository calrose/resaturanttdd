#pragma once
#include <string>
#include <iostream>

using namespace std;

class Food
{
public:

	Food();
	//~MyClass();
	string getName();
	string setName(string name);
	float getPrice();
	float setPrice(float price);
private:
	string name;
	float price;
};

Food::Food()
{
	name = "";
}


string Food::getName()
{
	return name;
}

string Food::setName(string rName)
{
	name = rName;
	return name;
}

float Food::getPrice()
{
	return price;
}

float Food::setPrice(float rPrice)
{
	price = rPrice;
	return price;
}