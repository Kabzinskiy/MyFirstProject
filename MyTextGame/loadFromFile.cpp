#include "loadFromFile.h"


void loadCharacterFromFile(Character& yourPerson)
{
	cout << "Введите имя загружаемого персонажа, разумеется на русском и без изысков." << endl;
	string name;
	SetConsoleCP(1251);
	cin >> name;
	SetConsoleCP(866);
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
		cout << "Ошибка открытия файла!!!" << endl;
		cout << error.what() << endl;
	}

	loadFile >> yourPerson;
	loadFile.close();
	
}