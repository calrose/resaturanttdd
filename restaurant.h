#pragma once
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Restaurant
{
public:
	Restaurant();
	string getName();
	string setName(string rName);
private:
	string name;
};

class Food : public Restaurant
{
public:
	Food();
	float getPrice();
	float setPrice(float rPrice);
	float roundTwo(float value);
private:
	float price;
};

Restaurant::Restaurant()
{
	name = "";
}

Food::Food()
{
	price = 0.0;
}


string Restaurant::getName()
{
	return name;
}

string Restaurant::setName(string rName)
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
	if (rPrice < 0.0)
	{
		cout << "Value " << rPrice << " is negative. Setting it to " << price << endl;
		return price;
	}
	else
	{
		price = roundTwo(rPrice);
		return price;
	}
}

// Used for rounding price to two decimal places
float Food::roundTwo(float value)
{
	char container[40];
	sprintf_s(container, "%.2f", value);
	sscanf_s(container, "%f", &value);
	return value;
}
