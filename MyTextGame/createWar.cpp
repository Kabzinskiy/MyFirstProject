#include "createWar.h"

Character* createWar()
{
	setlocale(LC_ALL, "ru");

	string temporaryName = "temporaryName";
	Character* warrior = new War;
	cout << "Введите что-нибудь плохое на русском: " << endl;
	SetConsoleCP(1251);
	cin >> temporaryName;
	SetConsoleCP(866);
	cout << "Теперь это Ваше имя, хехехе! Не расслабляйтесь." << endl;
	system("pause");
	War tempWar;
	tempWar.set_nameCharacter(temporaryName);
	*warrior = tempWar;
	saveCharacterToFile(tempWar);
	return warrior;
}




