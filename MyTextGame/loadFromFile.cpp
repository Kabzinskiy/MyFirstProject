#include "loadFromFile.h"


void loadCharacterFromFile(Character& yourPerson)
{
	cout << "Enter the name of the character to be uploaded." << endl;
	string name;

	cin >> name;

	string fileExtension = ".txt";
	string pathToFile = name + fileExtension;
	ifstream loadFile;
	loadFile.exceptions( ifstream::badbit | ifstream::failbit );

	try
	{
		loadFile.open(pathToFile);
		
	}
	catch ( const std::exception& error )
	{
		cout << "Error opening file !!!" << endl;
		cout << error.what() << endl;
	}

	loadFile >> yourPerson;
	loadFile.close();
	
}