#include "Unit.hpp"

int numOfUnits = 0;

Unit::Unit() {
	
}

Unit::~Unit() {
	
}

void Unit::add(const Ship& member) {
	this->unit.push_back(member);
}

void Unit::display() {
	unsigned int size = this->unit.size();
	if(size) {
//		cout << "     NAME      VELOCITY  SCOPE     DURABILITY COMBAT VALUE" << endl;
		for( unsigned int i = 0; i < size; i++ ) {
			cout << setw(3) << i+1 << ". ";
			this->unit[i].display();
		}
	}
	else {
		cout << "This unit has no members" << endl;
	}
}

int Unit::getVelocity() {
	int total = 0;
	return total;
}

int Unit::getManuverability() {
	int total = 0;
	return total;
}
int Unit::getScope() {
	int total = 0;
	return total;
}
int Unit::getDurability() {
	int total = 0;
	return total;
}