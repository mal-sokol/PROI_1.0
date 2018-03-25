#include "Arsenal.hpp"

Arsenal::Arsenal()
{
	Weapon* newWeapon = NULL;
	fstream myFile;
	myFile.open("arsenal.txt", std::ios::in | std::ios::out);
	
	double vInf, scInf, dInf, cValue;
	string name;
	
	if(myFile.good()) {
		while(myFile >> name >> vInf >> scInf >> dInf >> cValue) {
			newWeapon = new Weapon(name, vInf, scInf, dInf, cValue);
			arsenal.push_back(newWeapon);
		}
		myFile.close();
	}
	else {
		cout << "Your arsenal is epmty" << endl;
	}
}


Arsenal::~Arsenal()
{
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

}


void Arsenal::display() 
{
	int width = 12;
	unsigned int size = this->arsenal.size();
	if(size) {
			cout<< setw(5*width + 5) << right << "COMBAT" << endl <<  "     "
				<< setw(width) << left << "NAME" << right
				<< setw(width) << "VELOCITY"
				<< setw(width) << "SCOPE"
				<< setw(width) << "DURABILITY"
				<< setw(width) << "VALUE" << endl
				<< setfill('-') << setw(5*width + 5) << '-' << setfill(' ') << endl;
				
		for( unsigned int i = 0; i < size; i++ ) {
			cout << setw(3) << i+1 << ". ";
			this->arsenal[i]->display();
		}
	}
	else {
		cout << "Your arsenal is empty" << endl;
	}
}

void Arsenal::add(Weapon* weapon) {
	this->arsenal.push_back(weapon);
}