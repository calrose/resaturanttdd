#include "stdafx.h"
#include "CppUnitTest.h"
#include "../restauranttdd/restaurant.h"
#include "../restauranttdd/person.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RestaurantUnitTest
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestRestaurantName)
		{
			// Make sure string is being set correctly
			Restaurant testObj;
			string expected = "test";
			string empty = "";
			testObj.setName(expected);
			Assert::AreEqual(expected, testObj.getName());
			// See if things work fine with a number in the string
			expected = "5old";
			testObj.setName(expected);
			Assert::AreEqual(expected, testObj.getName());
		}

		TEST_METHOD(TestRestaurantPrices)
		{
			// Test to see if prices are being set correctly
			Food testObj;
			float expected = 5.99;
			float blank = 0.0;
			testObj.setPrice(expected);
			Assert::AreEqual(expected, testObj.getPrice());
			// Make sure precision is correct
			// The roundTwo rounds up
			float value = 10.55555;
			expected = 10.56;
			testObj.setPrice(value);
			Assert::AreEqual(expected, testObj.getPrice());
			// Make sure that negative numbers don't work
			float incorrect = -1.0;
			testObj.setPrice(incorrect);
			Assert::AreNotEqual(incorrect, testObj.getPrice());
			Assert::AreEqual(blank, testObj.getPrice());
		}

		TEST_METHOD(TestCreatePerson)
		{
			//Make sure the person is being created correctly
			string expectedName = "Alex";
			TestPerson person(expectedName);
			Assert::AreEqual(expectedName, person.getName());
			Assert::AreEqual(float(0.0), person.getTotalCost());
		}

		TEST_METHOD(TestPersonOrder)
		{
			//Make sure the person can add food to there order and it is being
			//updated correctly
			TestPerson person("Alex");
			Food food1;
			food1.setName("Burger");
			food1.setPrice(9.99);
			Food food2;
			food2.setName("Fries");
			food2.setPrice(4.99);
			Food food3;
			food3.setPrice(2.99);
			food3.setName("Shake");
			person.addFood(food1);
			Assert::AreEqual(float(9.99), person.getTotalCost());
			person.addFood(food2);
			Assert::AreEqual(float(14.98), person.getTotalCost());
			person.addFood(food3);
			Assert::AreEqual(float(17.97), person.getTotalCost());
		}

	};
}
