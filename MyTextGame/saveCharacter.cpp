#include "saveCharacter.h"


void saveCharacterToFile(Character& yourPerson)
{
	setlocale(LC_ALL, "ru");
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
		cout << "Ошибка открытия файла!!!" << endl;
		cout << error.what() << endl;
	}

	saveFile << yourPerson;
	saveFile.close();
	cout << "Увы, но файл сохранен(" << endl;
}