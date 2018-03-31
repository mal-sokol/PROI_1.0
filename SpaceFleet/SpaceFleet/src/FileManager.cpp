#include "FileManager.hpp"

FileManager::FileManager(string fileName)
{
	myFile.open(fileName.c_str() , ios::in | ios::out);
}

FileManager::~FileManager()
{
	myFile.close();
}

Arsenal* FileManager::readArsenal() {
	
	double vInf, scInf, dInf, cValue;
	string name;
	Weapon* newWeapon;
	Arsenal* newArsenal = new Arsenal;
	
	if(myFile.good()) {
		while(myFile >> name >> vInf >> scInf >> dInf >> cValue) {
			newWeapon = new Weapon(name, vInf, scInf, dInf, cValue);
			newArsenal->add(newWeapon);
		}
//		myFile.close();
	}
	else {
		cout << "Your arsenal is epmty" << endl;
	}
	return newArsenal;
}