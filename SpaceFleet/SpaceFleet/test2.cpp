//Test tworzy obiekty typu Ship, Cargo i Combat o parametrach domyslnych.

#include <iostream>
#include <string>
#include "Ship.hpp"
#include "Cargo.hpp"
#include "Combat.hpp"

using namespace std;

string shipFlex(int num);

int test2()
{
	Ship X;
	Cargo Y;
	Cargo Z;
	Ship NOT("NOT", 10);
	Combat R;
	Ship Horror("Horror", 100000);
	
	cout << "Test tworzy " << Ship::getNumberOfShips() <<" "<< shipFlex(Ship::getNumberOfShips()) << endl
		<< "W tym " << Cargo::getNumberOfCargo() <<" "<< shipFlex(Cargo::getNumberOfCargo())
		<< " typu transportowego, " << Combat::getNumberOfCombat() <<" "<< shipFlex(Combat::getNumberOfCombat())
		<< " typu bojowego." << endl << endl;
		
	X.getInfo();
	cout<< endl;
	Y.getInfo();
	cout<< endl;
	Z.getInfo();
	cout<< endl;
	NOT.getInfo();
	cout<< endl;
	R.getInfo();
	cout<< endl;
	Horror.getInfo();
	cout<< endl;
		
	return 0;
}