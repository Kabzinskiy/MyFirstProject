#include "createWarrior.h"

Character* createWarrior()
{
	setlocale(LC_ALL, "ru");

	string temporaryName = "temporaryName";
	Character* warrior = new Warrior;
	cout << "Enter your future name: " << endl;
	cin >> temporaryName;
	cout << "Congratulations on creating your character." << endl;
	system("pause");
	Warrior tempWar;
	tempWar.set_nameCharacter(temporaryName);
	*warrior = tempWar;
	saveCharacterToFile(tempWar);
	return warrior;
}




