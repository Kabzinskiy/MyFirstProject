#include "createMonk.h"

Character* createMonk()
{
	setlocale(LC_ALL, "ru");

	string temporaryName = "temporaryName";
	Character* monk = new Monk;
	cout << "Введите что-нибудь противное на русском: " << endl;
	SetConsoleCP(1251);
	cin >> temporaryName;
	SetConsoleCP(866);
	cout << "Теперь это Ваше имя, хехехе! Не расслабляйтесь." << endl;
	system("pause");
	Monk tempMonk;
	tempMonk.set_nameCharacter(temporaryName);
	*monk = tempMonk;
	saveCharacterToFile(tempMonk);
	
	return monk;
}