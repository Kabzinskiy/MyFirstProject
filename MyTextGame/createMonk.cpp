#include "createMonk.h"

Character* createMonk()
{
	setlocale(LC_ALL, "ru");

	string temporaryName = "temporaryName";
	Character* monk = new Monk;
	cout << "������� ���-������ ��������� �� �������: " << endl;
	SetConsoleCP(1251);
	cin >> temporaryName;
	SetConsoleCP(866);
	cout << "������ ��� ���� ���, ������! �� ��������������." << endl;
	system("pause");
	Monk tempMonk;
	tempMonk.set_nameCharacter(temporaryName);
	*monk = tempMonk;
	saveCharacterToFile(tempMonk);
	
	return monk;
}