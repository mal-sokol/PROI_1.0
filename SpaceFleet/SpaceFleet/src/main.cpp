#include <iostream>
#include <string>

#include "Ship.hpp"
#include "Cargo.hpp"
#include "Combat.hpp"
#include "Weapon.hpp"
#include "Fleet.hpp"
#include "Menu.hpp"
#include "View.hpp"
#include "Test.hpp"

using namespace std;

int main() {
	
//	View* view = new View();
//	if(view->start()) {
//		view->createFleet();
//		view->showInstructions();
//		view->showMain();
//	}
//	delete view;

	Test* test = new Test();
	cout << test->Test::test7();
	delete test;
	return 0;
}