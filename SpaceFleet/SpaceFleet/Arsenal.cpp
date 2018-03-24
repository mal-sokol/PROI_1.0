#include "Arsenal.hpp"

Arsenal::Arsenal()
{
	fstream myFile;
	myFile.open("arsenal.txt", std::ios::in | std::ios::out);
	
	int vInf, scInf, dInf, cValue;
	string name;
	
	if(myFile.good()) {
		while(myFile >> name >> vInf >> scInf >> dInf >> cValue) {
			Weapon weapon(name, vInf, scInf, dInf, cValue);
			arsenal.push_back(weapon);
		}
		myFile.close();
	}
	else {
		cout << "Your arsenal is epmty" << endl;
		vector <Weapon> arsenal;
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
				myFile << this->arsenal[i].getName() << ' '
						<< this->arsenal[i].getVelocityInf() << ' '
						<< this->arsenal[i].getScopeInf() << ' '
						<< this->arsenal[i].getDurabilityInf() << ' '
						<< this->arsenal[i].getCombatValue() <<endl;
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
	unsigned int size = this->arsenal.size();
	if(size) {
		for( unsigned int i = 0; i < size; i++ ) {
			cout << i+1 << ". ";
			this->arsenal[i].display();
		}
	}
	else {
		cout << "Your arsenal is empty" << endl;
	}
}

void Arsenal::add(const Weapon& weapon) {
	this->arsenal.push_back(weapon);
}