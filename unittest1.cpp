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
			float value = 10.55555;
			expected = 10.55;
			testObj.setPrice(value);
			Assert::AreEqual(expected, testObj.getPrice());
			// Make sure that negative numbers don't work
			float incorrect = -1.0;
			testObj.setPrice(incorrect);
			Assert::AreNotEqual(incorrect, testObj.getPrice());
			Assert::AreEqual(blank, testObj.getPrice());
		}

	};
}
