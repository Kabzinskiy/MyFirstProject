#include "loadFromFile.h"


void loadCharacterFromFile(Character& yourPerson)
{
	cout << "������� ��� ������������ ���������, ���������� �� ������� � ��� �������." << endl;
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
		cout << "������ �������� �����!!!" << endl;
		cout << error.what() << endl;
	}

	loadFile >> yourPerson;
	loadFile.close();
	
}