#include "createRogue.h"

Character* createRogue()
{
	setlocale(LC_ALL, "ru");

	string temporaryName = "temporaryName";
	Character* rogue = new Rogue;
	cout << "������� ���-������ ��������� �� �������: " << endl;
	SetConsoleCP(1251);
	cin >> temporaryName;
	SetConsoleCP(866);
	cout << "������ ��� ���� ���, ������! �� ��������������." << endl;
	system("pause");
	Rogue tempRogue;
	tempRogue.set_nameCharacter(temporaryName);
	*rogue = tempRogue;
	saveCharacterToFile(tempRogue);
	return rogue;
}