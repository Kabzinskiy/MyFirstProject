#include "includeFile.h"

int main(){
	setlocale(LC_ALL, "ru");
	Character* person;
	person = startChoiseFunc();
	string menuChoise;
	while (menuChoise != "7")
	{
		system("cls");
		cout << "������� 1 ��� ������ � �������." << endl;
		cout << "������� 2 ��� ����, ����� �������� �� ����." << endl;
		cout << "������� 3 ��� ����, ����� �������� � ����." << endl;
		cout << "������� 4 ��� ����, ����� �������� �� �������� �����." << endl;
		cout << "������� 5 ��� ����, ����� ����������� ���������� � ���������." << endl;
		cout << "������� 6 ��� ����, ����� �����������." << endl;
		cout << "������� 7 ��� ����, ����� �����." << endl;


		cin >> menuChoise;

		if (menuChoise == "1")
		{
			openStore(*person);
		}
		else if (menuChoise == "2")
		{
			funcStartMeadow(*person);
		}
		else if (menuChoise == "3")
		{
			funcForest(*person);
		}
		else if (menuChoise == "4")
		{
			funcWindField(*person);
		}
		else if (menuChoise == "5")
		{
			(*person).showCharacter();
			system("pause");
		}
		else if (menuChoise == "6")
		{
			saveCharacterToFile(*person);
			system("pause");
		}

	}


	saveCharacterToFile(*person);
	releaseOfCharacterMemory(person);
	system("pause");
	return 0;
}