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
	Ship XR027("XR027");
	Cargo CHROM("CHROM");
	Cargo MIX("MIX");
	Cargo COS012("COS012");
	Cargo TAS001("TAS001");
	Combat Attic001("Attic001");
	Combat Attic002("Attic002");
	
	

	XR027.display();
	cout << endl;
	CHROM.display();
	cout << endl;
	MIX.display();
	cout << endl;
	COS012.display();
	cout << endl;
	TAS001.display();
	cout << endl;
	Attic001.display();
	cout << endl;
	Attic002.display();
	cout << endl;
	
	return 0;
}
