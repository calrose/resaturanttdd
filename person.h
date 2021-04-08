#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "restaurant.h"

using namespace std;

class TestPerson
{
public:
	TestPerson():
	TestPerson(string name);
	void addFood(food newFood);
	float getTotalCost();

private:
	string personName;
	float totalPrice;
	vector<Food> order;
};

TestPerson::TestPerson()
{
	personName = "";
}

TestPerson::TestPerson(string name)
{
	personName = name;
}

void TestPerson::addFood(food newFood)
{
	order.push_back(newFood);
	totalPrice += newFood.getPrice();
}

float TestPerson::getTotalCost()
{
	return totalPrice;
}