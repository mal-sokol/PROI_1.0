//Testowanie Menu
#include <iostream>
#include <string>
#include "Ship.hpp"
#include "Cargo.hpp"
#include "Combat.hpp"
#include "Arsenal.hpp"
#include "Unit.hpp"
#include "Menu.hpp"

using namespace std;

string shipFlex(int num);

int test7() {
//	int i;
//	Menu menu(5, 30, 10);
//	menu.display();
//	cin >> i;
//	while(!(cin.good()) || i<1 || i>3) {
//		cin.clear();
//		cin.ignore(1000, '\n');
//		cin >> i;
//	}
//	menu.extend(i);

	Menu menu(5, 30, 25);
	menu.hello();
	return 0;
}