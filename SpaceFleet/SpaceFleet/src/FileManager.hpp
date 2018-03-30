#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class FileManager
{
public:
	FileManager(){}
	FileManager(string fileName);
	~FileManager();
	
	fstream myFile;
};

#endif // FILEMANAGER_HPP
