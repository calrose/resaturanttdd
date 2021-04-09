#include "restaurant.h"
#include "person.h"

int main()
{
	Restaurant fineDinery;
	Food spaghetti;
	Food garlicBread;
	Food alfredo;
	TestPerson jeff("Jeff");
	TestPerson sarah("Sarah");
	fineDinery.setName("Calvin and Alex's Fine Dinery");
	spaghetti.setName("Spaghetti and meatballs");
	spaghetti.setPrice(14.99);
	garlicBread.setName("Garlic bread");
	garlicBread.setPrice(2.99);
	alfredo.setName("Alfredo pasta");
	alfredo.setPrice(11.99);
	jeff.addFood(spaghetti);
	sarah.addFood(garlicBread);
	sarah.addFood(alfredo);
	cout << "Welcome to " << fineDinery.getName() << "." << endl << endl;
	cout << "Menu: " << spaghetti.getName() << ": " << spaghetti.getPrice() << ", " << garlicBread.getName() << ": " << garlicBread.getPrice() << ", " << alfredo.getName() << ": " << alfredo.getPrice() << endl << endl;
	cout << "Current patrons: " << jeff.getName() << ", " << sarah.getName() << "." << endl;
	cout << jeff.getName() << "'s order: " << endl;
	jeff.printOrder(jeff.getOrder());
	cout << endl << "Total cost: " << jeff.getTotalCost() << endl;
	cout << sarah.getName() << "'s order: " << endl;
	sarah.printOrder(sarah.getOrder());
	cout << endl << "Total cost: " << sarah.getTotalCost() << endl;
	cin.get();
	return 0;
}
