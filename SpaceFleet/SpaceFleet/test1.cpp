//Test tworzy obiekty typu Ship i Cargo oraz wyswietla dane obiektow.

#include <iostream>
#include <string>
#include "Ship.hpp"
#include "Cargo.hpp"

using namespace std;

int main(int argc, char **argv)
{
	Ship XR027("XR027", 300, 120, 70, 1000);
	Cargo CHROM("CHROM", 200, 30, 7500, 45, 1200);
	
	cout << "Test tworzy " << Ship::getNumberOfShips() << " statkow" << endl << endl;
	

	XR027.getInfo();
	
	cout << endl;
	
	CHROM.getInfo();
	return 0;
}
