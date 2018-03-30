#include "FileManager.hpp"

FileManager::FileManager(string fileName)
{
	myFile.open(fileName.c_str() , ios::in | ios::out);

}

FileManager::~FileManager()
{
	myFile.close();
}

