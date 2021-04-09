#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "restaurant.h"

using namespace std;

class TestPerson
{
public:
	TestPerson();
	TestPerson(string name);
	void addFood(Food newFood);
	void printOrder(vector<Food> userOrder);
	float getTotalCost();
	string getName();
	vector<Food> getOrder();

private:
	string personName;
	float totalPrice;
	vector<Food> order;
};

TestPerson::TestPerson()
{
	personName = "";
	totalPrice = 0;
}

TestPerson::TestPerson(string name)
{
	personName = name;
	totalPrice = 0;
}

string TestPerson::getName()
{
	return personName;
}

void TestPerson::addFood(Food newFood)
{
	order.push_back(newFood);
	totalPrice += newFood.getPrice();
}

float TestPerson::getTotalCost()
{
	return totalPrice;
}

vector<Food> TestPerson::getOrder()
{
	return order;
}

void TestPerson::printOrder(vector<Food> userOrder)
{
	for (int i = 0; i < userOrder.size(); i++)
	{
		cout << userOrder[i].getName() << " ";
	}
}
