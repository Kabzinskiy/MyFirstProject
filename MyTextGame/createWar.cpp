#include "createWar.h"

Character* createWar()
{
	setlocale(LC_ALL, "ru");

	string temporaryName = "temporaryName";
	Character* warrior = new War;
	cout << "������� ���-������ ������ �� �������: " << endl;
	SetConsoleCP(1251);
	cin >> temporaryName;
	SetConsoleCP(866);
	cout << "������ ��� ���� ���, ������! �� ��������������." << endl;
	system("pause");
	War tempWar;
	tempWar.set_nameCharacter(temporaryName);
	*warrior = tempWar;
	saveCharacterToFile(tempWar);
	return warrior;
}




