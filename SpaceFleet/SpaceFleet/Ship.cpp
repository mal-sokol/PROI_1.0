#include "Ship.hpp"

unsigned int Ship::numberOfShips = 0;

Ship::Ship() {
	
	cout<< "Dziala domyslny konstruktor Ship"<< endl;
	this->name = "Standard";
	this->velocity = 50;
	this->scope = 1000;
	this->durability = 50;
	this->formation = none;
	
	Ship::numberOfShips++;
}

Ship::Ship(const Ship& toCopyFrom) {
	name = toCopyFrom.name;
	velocity = toCopyFrom.velocity;
	scope = toCopyFrom.scope;
	durability = toCopyFrom.durability;
	formation = toCopyFrom.formation;
}

Ship::Ship(string name) {
	
	cout<< "Dziala konstruktor Ship"<< endl;
	srand( time( NULL ));
	this->name = name;
	this->velocity = (rand()+50)%150;
	this->scope = (rand()+800)%1500;
	this->durability = (rand()+20)%100;
	this->formation = none;
	
	Ship::numberOfShips++;
}

Ship::~Ship()
{
	cout << "~Ship(): uruchomiono" << std::endl;
}


void Ship::display() {
	
	const int width = 12;
	
	cout.precision(2);
	cout<< dec
		<< setw(width) << left << this->name
		<< setw(width-3) << this->velocity << " %c"
		<< setw(width-3) << this->scope << " ly"
		<< setw(width-3) << this->durability << " % "
		<< setw(width) << this->formationToString();
}

string Ship::formationToString() const {
	string myFormation;
	switch(this->formation) {
		case 1:
			myFormation = "line";
			break;
		case 2:
			myFormation = "matrix";
			break;
		case 3:
			myFormation = "spear";
			break;
		case 4:
			myFormation = "cube";
			break;
		default:
			myFormation = "-";
			break;
	}
	return myFormation;
}

Ship& Ship::operator= (const Ship& other) {
	if(this != &other) {
		name = other.name;
		velocity = other.velocity;
		scope = other.scope;
		durability = other.durability;
		formation = other.formation;
	}
	return *this;
}