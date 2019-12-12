#include "saveCharacter.h"


void saveCharacterToFile(Character& yourPerson)
{
	string fileExtension = ".txt";
	string pathToFile = (yourPerson.get_nameCharacter() + fileExtension);
	ofstream saveFile;
	saveFile.exceptions(ofstream::badbit | ofstream::failbit);
	try
	{
		saveFile.open(pathToFile);
	}
	catch ( const std::exception& error )
	{
		cout << "Error opening file!!!" << endl;
		cout << error.what() << endl;
	}

	saveFile << yourPerson;
	saveFile.close();
	cout << "Sorry file saved(" << endl;
}