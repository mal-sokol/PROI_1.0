#include "Fleet.hpp"

Fleet::Fleet() {
	
}

Fleet::Fleet(Arsenal& toCpy) {
	Arsenal arsenal(toCpy);
}

Fleet::~Fleet() {
//	cout << "Fleet destructor at work" << endl;
	unsigned int size = this->fleet.size();
	if(size) {
		for( unsigned int i = 0; i < size; i++ ) {
			cout << this->fleet[i]->getName() << "Fleet destroyed" << endl;
//			this->fleet[i]->~Unit();
			delete this->fleet[i];
		}
		this->fleet.clear();
	}
}

void Fleet::add(Unit* newUnit) {
	this->fleet.push_back(newUnit);
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

Unit* Fleet::getUnit(unsigned int chosen) {
	
	unsigned int size;
	size = this->fleet.size();
	
	if(chosen<size) {
		return this->fleet[chosen-1];
	}
	else {
		cout << "Nie masz tyle jednostek" << endl;
		return NULL;
	}
}

//Unit* Fleet::getUnit(string name) {
//	unsigned int size, i;
//	Unit* ptr = NULL;
//	size = this->fleet.size();
//	for(i = 0; i<size; i++) {
//		if(name == this->fleet[i]->getName()) {
//			ptr = this->fleet[i];
//			break;
//		}
//	}
//	if(!ptr) {
//		cout << "Unit not found" << endl;
//	}
//	return ptr;
//}

void Fleet::findBest(char criteria) {
	
	unsigned int i;
	unsigned int size = fleet.size();
	
	if(size) {
		Unit* temp = new Unit;
		if(tolower(criteria) == 'a') {
			for(i = 0; i<size; i++) {
				if(cmpVelocity(temp, fleet[i]))
					*temp = *fleet[i];
			}
		}
		else if(tolower(criteria) == 'b') {
			for(i = 0; i<size; i++) {
				if(cmpScope(temp, fleet[i]))
					*temp = *fleet[i];
			}
		}
		else if(tolower(criteria) == 'c') {
			for(i = 0; i<size; i++) {
				if(cmpDurability(temp, fleet[i]))
					*temp = *fleet[i];
			}
		}
		else if(tolower(criteria) == 'd') {
			for(i = 0; i<size; i++) {
				if(cmpCombatValue(temp, fleet[i]))
					*temp = *fleet[i];
			}
		}
		else if(tolower(criteria) == 'e') {
			for(i = 0; i<size; i++) {
				if(cmpCapacity(temp, fleet[i]))
					*temp = *fleet[i];
			}
		}
	temp->display();
	}
}


void Fleet::display() {
	
	cout.precision(2);
	cout << fixed;
	
	unsigned int size = fleet.size();
	for(unsigned int i = 0; i<size; i++) {
		fleet[i]->display();
		cout << endl;
		fleet[i]->displayMembers();
		cout << endl;
	}
}

void Fleet::shortDisplay() {
	
	cout.precision(2);
	cout << fixed;
	
	int width = 13;
	unsigned int size = this->fleet.size();
	if(size) {
			cout<< setw(6*width) << right << "WARTOSC" << endl <<  "     "
				<< setw(width-1) << left << "NAZWA" << right
				<< setw(width-5) << "PREDKOSC"
				<< setw(width) << "ZASIEG"
				<< setw(width+1) << "WYTRZYMALOSC"
				<< setw(width) << "LADUNEK"
				<< setw(width) << "BOJOWA" << endl
				<< setfill('-') << setw(6*width) << '-' << setfill(' ') << endl;
				
		for( unsigned int i = 0; i < size; i++ ) {
			cout << setw(3) << i+1 << ". "
				<< setw(width-1) << left << fleet[i]->getName() << right
				<< setw(width-5) << fleet[i]->getVelocity()
				<< setw(width) << fleet[i]->getScope()
				<< setw(width+1) << fleet[i]->getDurability()
				<< setw(width) << fleet[i]->getCapacity()
				<< setw(width) << fleet[i]->getCombatValue() << endl;
		}
		cout << endl;
	}
	else {
		cout << "Twoj arsenal jest pusty" << endl;
	}
}