#include "Fleet.hpp"

Fleet::Fleet() {
	
}

Fleet::Fleet(Arsenal& toCpy) {
	
}

Fleet::~Fleet() {
	cout << "Fleet destructor at work" << endl;
	unsigned int size = this->fleet.size();
	if(size) {
		for( unsigned int i = 0; i < size; i++ ) {
			cout << this->fleet[i]->getName() << " destroyed" << endl;
			delete this->fleet[i];
		}
		this->fleet.clear();
	}
}

void Fleet::add(Unit* newUnit) {
	this->fleet.push_back(newUnit);
}

Unit* Fleet::getUnit(unsigned int chosen) {
	unsigned int size = this->fleet.size();
	if((chosen-1) < size) {
		return this->fleet[chosen-1];
	}
	else return NULL;
}

void Fleet::assignWeapon(Unit* unit, Combat* ship, Weapon* weapon) {
//	Unit* ptrU = getUnit(unit);
//	Weapon* ptrW = this->arsenal.getWeapon(weapon);
//	Ship* prtS = NULL;
//	
//	if(ptrU && ptrW) {
//		ptrS = ptrU->getShip(ship);
//		if(ptrS) {
//			if(ptrS->getCobatValue() != 0) {
//				ptrS->getWeapon(ptrW);
//				this->arsenal.erase(ptrW);
//			}
//		}
//	}
}

void Fleet::removeWeapon(unsigned int unit, unsigned int ship) {
	
}

//Unit* Fleet::getUnit(unsigned int chosen) {
//	unsigned int size, i;
//	size = this->fleet.size();
//	
//	if(chosen<size) {
//		return this->fleet[chosen-1];
//	}
//	else {
//		cout >> "Unit not found" >>endl;
//		return NULL;
//	}
//}

Unit* Fleet::getUnit(string name) {
	unsigned int size, i;
	Unit* ptr = NULL;
	size = this->fleet.size();
	for(i = 0; i<size; i++) {
		if(name == this->fleet[i]->getName()) {
			ptr = this->fleet[i];
			break;
		}
	}
	if(!ptr) {
		cout << "Unit not found" << endl;
	}
	return ptr;
}