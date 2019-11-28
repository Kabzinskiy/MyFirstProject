#include "store.h"

void openStore( Character& yourCharacter )
{
	system("cls");
	setlocale(LC_ALL, "ru");

	cout << "��, ��� �� � � ���������� ��������." << endl;
	cout << "��������� �����, ���� ������ ������� �� �������� ��������������." << endl;
	cout << "��������� �� ������." << endl;
	cout << "����� ������� � ������ �������, ��� �� ������, ��� � �� ��������������. " << endl;

	string choise = "1";
	

	while (choise == "1" || choise == "2" || choise == "3" || choise == "4" || choise == "5")

	{
		int cost = 0;
		cout << "���� ���������� ����� " << yourCharacter.get_characterMoney() << endl;
		cout << "����� ��������� �����������, ������� 1 - ����� 30 ������� �� 10 ������. " << endl;
		cout << "����� ��������� ���� �������� �������������� �� 90 ������� - ������� 2." << endl;
		cout << "��� ���������� ������ ������ (120 ������� �� �������) - 3." << endl;
		cout << "���������� ���� �� ���� ����� 500 ������� - ������� 4." << endl;
		cout << "���������� ���� �� �������� ����� ����� 1000 ������� - ������� 5." << endl;
		cout << "��� ������ ����� 6." << endl;

		cin >> choise;

		if (choise == "1")

		{
			cout << "���� �������� ���������� " << yourCharacter.get_maxHillPoints() << " �������." << endl;
			cout << "� ���, �� ������� ��������� ��������. ������� �� ������ �� ��� ���������?" << endl;
			cin >> cost;
			if ((yourCharacter.get_characterMoney() - cost) >= 0)
			{
				short factorHealth = cost / 30;
				short realCost = factorHealth * 30;
				yourCharacter.set_characterMoney(yourCharacter.get_characterMoney() - realCost);
				yourCharacter.set_maxHillPoints(yourCharacter.get_maxHillPoints() + (factorHealth * 10));
				cout << "�� ����� � ��� " << realCost << " ������� � �������� " << factorHealth * 10 << " ������." << endl;
			}
			else
			{
				cout << "� ��� ��� ����������� �����!" << endl;
			}
		}

		else if (choise == "2")

		{
			cout << "���� �������� �������������� ����� " << yourCharacter.get_basicStat() << endl;
			cout << "� ���, �� ������� �� ���������. ������� �� ������ �� ��� ���������?" << endl;
			cin >> cost;
			if ((yourCharacter.get_characterMoney() - cost) >= 0)
			{
				short factorStat = cost / 90;
				short realCost = factorStat * 90;
				yourCharacter.set_characterMoney(yourCharacter.get_characterMoney() - realCost);
				yourCharacter.set_basicStat(yourCharacter.get_basicStat() + factorStat);
				cout << "�� ����� � ��� " << realCost << " ������� � ������� �������������� �� " << factorStat << endl;
			}
			else
			{
				cout << "� ��� ��� ����������� �����!" << endl;
			}
		}

		else if (choise == "3")

		{

			if (yourCharacter.get_weaponID() < 9)
			{
				yourCharacter.printWeapons();
				cout << "������ ����� �������� ������ �� 1 ������. " << endl;
				cout << "� ���, �� ������� �������� ������. �������� ������ 120 �������." << endl;
				cin >> cost;
				if ((yourCharacter.get_characterMoney() - cost) >= 0)
				{
					if (cost >= 120)

					{
						yourCharacter.set_characterMoney(yourCharacter.get_characterMoney() - 120);
						yourCharacter.set_weaponID(yourCharacter.get_weaponID() + 1);
					}
				}
				else
				{
					cout << "� ��� ��� ����������� �����!" << endl;
				}

			}
			else
			{
				cout << "��������, �� �� �������� ������������� ������ ������. ���������� �������� ���-������ ������." << endl;
			}
		}

		else if (choise == "4")

		{
			cout << "�� ������ �������� ���� �� ���� ������� ������, �� ���� �� ��� ���?" << endl;
			cout << "� ���, �� ������� ���������� ����. ������� �� ������ �� ��� ���������?" << endl;
			cin >> cost;
			if ( ( (yourCharacter.get_characterMoney() - cost ) >= 0 ) && cost >= 500 )
			{
				yourCharacter.set_characterMoney(yourCharacter.get_characterMoney() - cost);
				yourCharacter.set_keyForest(true);
			}
			else
			{
				cout << "� ��� ��� ����������� �����!" << endl;
			}
		}

		else if (choise == "5")

		{
			cout << "�� ������ �������� ���� �� �������� ����� ������� ������, �� ���� �� ��� ���?" << endl;
			cout << "� ���, �� ������� ���������� ����. ������� �� ������ �� ��� ���������?" << endl;
			cin >> cost;

			if ( ( (yourCharacter.get_characterMoney() - cost) >= 0) && cost >= 1000 )
			{
				yourCharacter.set_characterMoney( yourCharacter.get_characterMoney() - cost );
				yourCharacter.set_keyWindField(true);
			}

			else
			{
				cout << "� ��� ��� ����������� �����!" << endl;
			}
		}

	

	}

}