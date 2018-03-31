#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Arsenal.hpp"
#include "Weapon.hpp"

using namespace std;

class FileManager
{
public:
	
	FileManager(string fileName);
	~FileManager();
	
	Arsenal* readArsenal();
	
	
private:
	fstream myFile;
	bool isOpen;
};

#endif // FILEMANAGER_HPP
