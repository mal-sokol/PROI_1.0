#include "Arsenal.hpp"

Arsenal::Arsenal() {
}

Arsenal::Arsenal(const Arsenal& toCopyFrom) {
	for(unsigned int i = 0; i < toCopyFrom.arsenal.size(); i++) {
		Weapon& ref = *toCopyFrom.arsenal[i];
		Weapon* ptr = new Weapon(ref);
		this->arsenal.push_back(ptr);
	}
	
}

Arsenal::~Arsenal() {
	unsigned int size = this->arsenal.size();
	if(size) {
		fstream myFile;
		myFile.open("arsenal.txt", ios::out | ios::trunc);
		if(myFile.good()) {
			for( unsigned int i = 0; i < size; i++ ) {
				myFile << this->arsenal[i]->getName() << ' '
						<< this->arsenal[i]->getVelocityInf() << ' '
						<< this->arsenal[i]->getScopeInf() << ' '
						<< this->arsenal[i]->getDurabilityInf() << ' '
						<< this->arsenal[i]->getCombatValue() <<endl;
				delete this->arsenal[i];
				}
			myFile.close();
		}
		else {
			cout << "ERROR: could not save your arsenal to a file" << endl;
		}
		this->arsenal.clear();
	}
	cout << "~Arsenal(): uruchomiono" << std::endl;

}

Arsenal& Arsenal::operator= (const Arsenal& other) {
	
	if(this != &other) {
		for(unsigned int i = 0; i < other.arsenal.size(); i++) {
			if(i < this->arsenal.size()) {
				cout << this->arsenal[i]->getName() << " destroyed" << endl;
				delete this->arsenal[i];
			}
			Weapon& ref = *other.arsenal[i];
			Weapon* ptr = new Weapon(ref);
			this->arsenal.push_back(ptr);
		}
	}
	return *this;
}

void Arsenal::display() {
	int width = 12;
	unsigned int size = this->arsenal.size();
	if(size) {
			cout<< setw(5*width + 5) << right << "WARTOSC" << endl <<  "     "
				<< setw(width) << left << "NAZWA" << right
				<< setw(width) << "PREDKOSC"
				<< setw(width) << "ZASIEG"
				<< setw(width) << "WYTRZYMALOSC"
				<< setw(width) << "BOJOWA" << endl
				<< setfill('-') << setw(5*width + 5) << '-' << setfill(' ') << endl;
				
		for( unsigned int i = 0; i < size; i++ ) {
			cout << setw(3) << i+1 << ". ";
			this->arsenal[i]->display();
		}
		cout << endl;
	}
	else {
		cout << "Your arsenal is empty" << endl;
	}
}

void Arsenal::add(Weapon* weapon) {
	this->arsenal.push_back(weapon);
}

//void Arsenal::remove(unsigned int i) {
//	
//	unsigned int size = arsenal.size();
//	if(i<size) {
//		
//	}
//}

Weapon* Arsenal::getWeapon(unsigned int chosen) {
	unsigned int size = arsenal.size();
	if((chosen-1) < size) {
		return arsenal[chosen-1];
	}
	else return NULL;
}