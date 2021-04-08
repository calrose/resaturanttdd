#include "stdafx.h"
#include "CppUnitTest.h"
#include "../restauranttdd/restaurant.h"
#include "../restauranttdd/person.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RestaurantUnitTest
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestCreatePerson)
		{
			//Make sure the person is being created correctly
			string expectedName = "Alex";
			TestPerson person(expectedName);
			Assert::IsNotNull(person);
			Assert::AreEqual(expectedName, person.getName());
			Assert::AreEqual(0, person.getTotalCost());
		}

		TEST_METHOD(TestPersonOrder)
		{
			//Make sure the person can add food to there order and it is being
			//updated correctly
			TestPerson person("Alex");
			Test food1;
			food1.setName("Burger");
			food1.setPrice(9.99);
			Test food2;
			food2.setName("Fries");
			food1.setPrice(4.99);
			Test food3;
			food1.setPrice(2.99);
			food3.setName("Shake");
			person.addFood(food1);
			Assert::AreEqual(9.99, person.getTotalCost());
			person.addFood(food2);
			Assert::AreEqual(14.98, person.getTotalCost());
			person.addFood(food3);
			Assert::AreEqual(17.97, person.getTotalCost());
		}
	};
}