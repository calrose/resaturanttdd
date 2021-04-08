#include "stdafx.h"
#include "CppUnitTest.h"
#include "../restauranttdd/restaurant.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RestaurantUnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestRestaurantName)
		{
			// Make sure string is being set correctly
			Food testObj;
			string expected = "test";
			string empty = "";
			testObj.setName(expected);
			Assert::AreEqual(expected, testObj.getName());
			// See if things work fine with a number in the string
			expected = "5old";
			testObj.setName(expected);
			Assert::AreEqual(expected, testObj.getName());
			// Make sure that there is proper error handling for ints in the name method
			int incorrect = 25;
			testObj.setName(incorrect);
			Assert::AreNotEqual(incorrect, testObj.getName());
			Assert::AreEqual(empty, testObj.getName());
		}

		TEST_METHOD(TestRestaurantPrices)
		{
			// Test to see if prices are being set correctly
			Food testObj;
			double expected = 5.99;
			double blank = 0.0;
			testObj.setPrice(expected);
			Assert::AreEqual(expected, testObj.getPrice());
			// Make sure precision is correct
			double value = 10.55555;
			expected = 10.55;
			testObj.setPrice(value);
			Assert::AreEqual(expected, testObj.getPrice());
			// Test error handling for incorrect data types
			string incorrect = "wrong";
			testObj.setPrice(incorrect);
			Assert::AreNotEqual(incorrect, testObj.getPrice());
			Assert::AreEqual(blank, testObj.getPrice());
		}

	};
}
