#include "fightFunction.h"

string yourDialog()
{
	int kubik;
	string yourWords_1 = "�� ������ �� �����.";
	string yourWords_2 = "���� ������ ���� �����, �� ��� �� ������� ��� �� ������� ��������.";
	string yourWords_3 = "�� ��� ������ ������ �����, ��� ��� ����� ������������ �� �����.";
	string yourWords_4 = "�������� �����, �� ��������� ������� ����� �������. �� ������ ����� ���� ������� �� ����. ";
	string yourWords_5 = "�� ������� � ��������������� ����, � ����� ���� ������������, �� �������� ������� ���� �� ��� ���������.";
	string yourWords_6 = "������ �������� �� ����������� �����, �� �������� ���� �� ������������.";
	kubik = rand() % 6;
	switch (kubik)
	{
	case 0:
		return yourWords_1;
		break;
	case 1:
		return yourWords_2;
		break;
	case 2:
		return yourWords_3;
		break;
	case 3:
		return yourWords_4;
		break;
	case 4:
		return yourWords_5;
		break;
	default:
		return yourWords_6;
		break;
	}

}

string enemyDialog()
{
	int kubik;

	string enemyWords_1 = "��������� ������������ ���� �������. ���� �� ��������, �� ���� ���� �������� �� ������.";
	string enemyWords_2 = "�� ������ ������������� �����, �� ����� �� �������� �� ��� �����.";
	string enemyWords_3 = "���� ������� ��� ������ ����������������, �� ��������� ��������� ���� �� ����������.";
	string enemyWords_4 = "\"����, �����!!! \" �������� ��, �������� ��� �������� ������ �� ������� ������ �����.";
	string enemyWords_5 = "�� �� ������� �� ����� �������, � ��������� ��� ������� �� �����.";
	string enemyWords_6 = "\"� ����� � ������ ���� \" ������� ��, ������� ����� ��� ��� �� ����������.";

	kubik = rand() % 6;

	switch (kubik)
	{
	case 0:
		return enemyWords_1;
		break;
	case 1:
		return enemyWords_2;
		break;
	case 2:
		return enemyWords_3;
		break;
	case 3:
		return enemyWords_4;
		break;
	case 4:
		return enemyWords_5;
		break;
	default:
		return enemyWords_6;
		break;
	}
}


void fightFunction(Character& yourChar, const Monstr& yourEnemy)
{
	setlocale(LC_ALL, "ru");
	short playerHP = yourChar.get_maxHillPoints();
	short enemyHP = yourEnemy.get_maxHillPoints();
	short counter = 1;
	while ( playerHP > 0 && enemyHP > 0 )
	{

		if ( counter%2 )
		{
			short damage = yourChar.characterDamage();
			cout << yourDialog() << endl;
			enemyHP -= damage;

			if (enemyHP < 0)
			{
				enemyHP = 0;
			}

			cout << "���� ������� " << damage << " ������ �����, ������ ��������: " << enemyHP << endl;
		}
		else
		{
			short damage = yourEnemy.monstrDamage();
			cout << enemyDialog() << endl;
			playerHP -= damage;
			if (playerHP < 0)
			{
				playerHP = 0;
			}
			cout << "�� �������� " << damage << " ������ �����, ������ ��������: " << playerHP << endl;
		}

        counter++;
	}

    
	if ( enemyHP == 0 )
	{
		cout << "��� ��� �� ����������, �� �� ��������, ��������� ���� ������." << endl;
		yourChar.set_characterMoney( yourChar.get_characterMoney() + yourEnemy.get_monstrPrice() );
		yourChar.set_killingsNumber(yourChar.get_killingsNumber() + 1);
	}
	else
	{
		cout << "��, ��� �� � �������� �� ����, � ������ ����� ���� �� ������." << endl;
	}
	

}