#include "stdafx.h"
#include "CppUnitTest.h"
#include "../restauranttdd/restaurant.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RestaurantUnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestClass)
		{
			Test testObj;
			string expected = "test";
			testObj.setName(expected);
			Assert::AreEqual(expected, testObj.getName());
		}

	};
}
