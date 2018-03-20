//Test tworzy obiekty typu Ship, Cargo i Combat oraz wyswietla dane obiektow.

#include <iostream>
#include <string>
#include "Ship.hpp"
#include "Cargo.hpp"
#include "Combat.hpp"

using namespace std;

string shipFlex(int num);

int test1()
{
	Ship XR027("XR027", 300, 120, 1000);
	Cargo CHROM("CHROM", 200, 30, 7500, 1200);
	Cargo MIX("MIX", 450, 80, 1000, 1000);
	Cargo COS012("COS012", 80, 80, 500, 4500);
	Cargo TAS001("TAS001", 450, 70, 700, 125);
	Combat Attic001("Attic001", 170, 300, 20, 600);
	Combat Attic002("Attic002", 190, 250, 60, 600);
	
	cout << "Test tworzy " << Ship::getNumberOfShips() <<" "<< shipFlex(Ship::getNumberOfShips()) << endl
		<< "W tym " << Cargo::getNumberOfCargo() <<" "<< shipFlex(Cargo::getNumberOfCargo())
		<< " typu transportowego, " << Combat::getNumberOfCombat() <<" "<< shipFlex(Combat::getNumberOfCombat())
		<< " typu bojowego." << endl << endl;
	

	XR027.getInfo();
	cout << endl;
	CHROM.getInfo();
	cout << endl;
	MIX.getInfo();
	cout << endl;
	COS012.getInfo();
	cout << endl;
	TAS001.getInfo();
	cout << endl;
	Attic001.getInfo();
	cout << endl;
	Attic002.getInfo();
	cout << endl;
	
	return 0;
}
