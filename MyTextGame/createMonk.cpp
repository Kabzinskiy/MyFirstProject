#include "createMonk.h"

Character* createMonk()
{
	setlocale(LC_ALL, "ru");

	string temporaryName = "temporaryName";
	Character* monk = new Monk;
	cout << "Enter your future name: " << endl;
	cin >> temporaryName;
	cout << "Congratulations on creating your character." << endl;
	system("pause");
	Monk tempMonk;
	tempMonk.set_nameCharacter(temporaryName);
	*monk = tempMonk;
	saveCharacterToFile(tempMonk);
	
	return monk;
}