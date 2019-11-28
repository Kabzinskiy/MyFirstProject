#include "forestLocation.h"

void funcForest(Character& yourPerson)
{
	bool key;
	key = yourPerson.get_keyForest();

	if (key)

	{

		cout << "�� ��� ��, ��� �� � � ����. ��� �� �������� �� ����-������ ��������." << endl;
		cout << "����� ��� ����� ���-������ ���������, ������� ��." << endl;
		cout << "�� ��������� ��������� ��� ��������, ������� ������� ������ ���������� �����." << endl;



		Monstr lizard;
		lizard.set_basicMonstrStat(40);
		lizard.set_maxHillPoints(500);
		lizard.set_monstrPrice(50);

		Monstr squirrel;
		squirrel.set_basicMonstrStat(45);
		squirrel.set_maxHillPoints(600);
		squirrel.set_monstrPrice(70);

		Monstr woodpecker;
		woodpecker.set_basicMonstrStat(50);
		woodpecker.set_maxHillPoints(670);
		woodpecker.set_monstrPrice(90);

		Monstr snake;
		snake.set_basicMonstrStat(70);
		snake.set_maxHillPoints(700);
		snake.set_monstrPrice(150);



		short random = rand() % 4;
		switch (random)
		{
		case 0:
			cout << "�� ��� �, ������ ��� ��� �������!!! ��� ��������� - �������!" << endl;
			fightFunction(yourPerson, lizard);
			break;
		case 1:
			cout << "�� ��� �, ������ ��� ��� �������!!! ��� ��������� - �����!" << endl;
			fightFunction(yourPerson, squirrel);
			break;
		case 2:
			cout << "�� ��� �, ������ ��� ��� �������!!! ��� ��������� - �����!" << endl;
			fightFunction(yourPerson, woodpecker);
			break;
		default:
			cout << "�� ��� �, ������ ��� ��� �������!!! ��� ��������� - ����!" << endl;
			fightFunction(yourPerson, snake);
			break;
		}


		cout << "����� � �����, �� ����� �����." << endl;


	}

	else
	{
		cout << "��������, �� ��� ������� �� ������ ������� ���������� ���������� ����." << endl;
	}
	
system("pause");
}