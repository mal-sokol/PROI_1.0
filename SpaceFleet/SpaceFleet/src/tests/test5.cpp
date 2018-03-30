//Tworzy unit i dodaje do niego wskazania na statki, wylicza parametry unitu i je wyswietla
//Zwraca ilosc parametrow niezgodnych z oczekiwaniami

#include <iostream>
#include <string>
#include "Ship.hpp"
#include "Cargo.hpp"
#include "Combat.hpp"
#include "Arsenal.hpp"
#include "Unit.hpp"

using namespace std;

string shipFlex(int num);

int test5() {
	int d = 0;
	
	
	Ship* ptr1 = new Ship("XR027");
	Cargo* ptrCargo1 = new Cargo("CHROM");
	Cargo* ptrCargo2 = new Cargo("MIX");
	Cargo* ptrCargo3 = new Cargo("COS012");
	Combat* ptrCombat1 = new Combat("TAS001");
	Combat* ptrCombat2 = new Combat("Attic001");
	Combat* ptrCombat3 = new Combat("Attic002");
	
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
	if(myUnit.getCombatValue() != (1400/7))
		d++;
	myUnit.setCapacity();
	if(myUnit.getCapacity() != (1200+1000+4500) )
		d++;
	
	cout << "Parameters have been updated" << endl;
	myUnit.display();
	
	return d;
}