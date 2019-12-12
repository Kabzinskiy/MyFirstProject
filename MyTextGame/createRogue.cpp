#include "createRogue.h"

Character* createRogue()
{
	setlocale(LC_ALL, "ru");

	string temporaryName = "temporaryName";
	Character* rogue = new Rogue;
	cout << "Enter your future name: " << endl;
	cin >> temporaryName;
	cout << "Congratulations on creating your character." << endl;
	system("pause");
	Rogue tempRogue;
	tempRogue.set_nameCharacter(temporaryName);
	*rogue = tempRogue;
	saveCharacterToFile(tempRogue);
	return rogue;
}