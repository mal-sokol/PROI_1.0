//Testowanie funkcji klasy Unit

#include <iostream>
#include <string>
#include "Ship.hpp"
#include "Cargo.hpp"
#include "Combat.hpp"
#include "Arsenal.hpp"
#include "Unit.hpp"

using namespace std;

string shipFlex(int num);

int test6() {
	int d = 0;
	
// [ship type](name, velocity, scope, durability, combatValue/capacity/-)
	
	Ship* ptr1 = new Ship("XR027", 300, 120, 1000);
	Cargo* ptrCargo1 = new Cargo("CHROM", 200, 30, 7500, 1200);
	Cargo* ptrCargo2 = new Cargo("MIX", 450, 80, 1000, 1000);
	Cargo* ptrCargo3 = new Cargo("COS012", 80, 80, 500, 4500);
	Combat* ptrCombat1 = new Combat("TAS001", 450, 70, 700, 125);
	Combat* ptrCombat2 = new Combat("Attic001", 170, 300, 20, 600);
	Combat* ptrCombat3 = new Combat("Attic002", 190, 250, 60, 600);
	
	cout << "Test tworzy " << Ship::getNumberOfShips() <<" "<< shipFlex(Ship::getNumberOfShips()) << endl
		<< "W tym " << Cargo::getNumberOfCargo() <<" "<< shipFlex(Cargo::getNumberOfCargo())
		<< " typu transportowego, " << Combat::getNumberOfCombat() <<" "<< shipFlex(Combat::getNumberOfCombat())
		<< " typu bojowego." << endl << endl;
	
	Unit myUnit("UnitTest001");
	
	myUnit.add(ptr1);
	myUnit.add(ptrCargo1);
	myUnit.add(ptrCargo2);
	myUnit.add(ptrCargo3);
	myUnit.add(ptrCombat1);
	myUnit.add(ptrCombat2);
	myUnit.add(ptrCombat3);
	
	myUnit.display();
	myUnit.displayMembers();
	
	myUnit.setVelocity();
	if(myUnit.getVelocity() != 80)
		d++;
	myUnit.setScope();
	if(myUnit.getScope() != 30)
		d++;
	myUnit.setDurability();
	if(myUnit.getDurability() != (1000+7500+1000+500+700+20+60)/7)
		d++;
	myUnit.setCombatValue();
	if(myUnit.getCombatValue() != 1325/7)
		d++;
	myUnit.setCapacity();
	if(myUnit.getCapacity() != (1200+1000+4500) )
		d++;
	
	cout << "Parameters have been updated" << endl;
	myUnit.display();
	
	return d;
}