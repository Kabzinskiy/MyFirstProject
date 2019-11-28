#include "windField.h"

void funcWindField(Character& yourPerson)
{
	bool key;
	key = yourPerson.get_keyWindField();

	if (key)

	{

		cout << "�� ������ �� �������� ���� � � ������� �������� �� ������� �������." << endl;
		cout << "���� �� ����� �� ���������, ������� ��." << endl;
		cout << "�� �� ���������� ��������� ����� ��������." << endl;



		Monstr rabbit;
		rabbit.set_basicMonstrStat(70);
		rabbit.set_maxHillPoints(1000);
		rabbit.set_monstrPrice(180);

		Monstr raccoon;
		raccoon.set_basicMonstrStat(80);
		raccoon.set_maxHillPoints(1100);
		raccoon.set_monstrPrice(200);

		Monstr lynx;
		lynx.set_basicMonstrStat(100);
		lynx.set_maxHillPoints(1500);
		lynx.set_monstrPrice(250);

		Monstr wolf;
		wolf.set_basicMonstrStat(150);
		wolf.set_maxHillPoints(2000);
		wolf.set_monstrPrice(400);



		short random = rand() % 4;
		switch (random)
		{
		case 0:
			cout << "�� ��� �, ������ ��� ��� �������!!! ��� ��������� - ������!" << endl;
			fightFunction(yourPerson, rabbit);
			break;
		case 1:
			cout << "�� ��� �, ������ ��� ��� �������!!! ��� ��������� - ����!" << endl;
			fightFunction(yourPerson, raccoon);
			break;
		case 2:
			cout << "�� ��� �, ������ ��� ��� �������!!! ��� ��������� - ����!" << endl;
			fightFunction(yourPerson, lynx);
			break;
		default:
			cout << "�� ��� �, ������ ��� ��� �������!!! ��� ��������� - ����!" << endl;
			fightFunction(yourPerson, wolf);
			break;
		}


		cout << "�� ������� ����� � ������." << endl;


	}

	else
	{
		cout << "��������, �� ��� ������� �� ������ ������� ���������� ���������� ����." << endl;
	}

system("pause");
}