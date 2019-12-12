#include "fight.h"

string yourDialog()
{
	int kubik;
	string yourWords_1 = "You strike a sharp blow.";
	string yourWords_2 = "You strike a chop.";
	string yourWords_3 = "You punched the enemy.";
	string yourWords_4 = "You were only miraculously able to hit the enemy with weapons.";
	string yourWords_5 = "You strike hard at his pride.";
	string yourWords_6 = "With your skills you have disappointed the enemy, he takes damage from the disorder.";
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

	string enemyWords_1 = "The enemy hits you on the head.";
	string enemyWords_2 = "You fly away three meters from the blow.";
	string enemyWords_3 = "You get a stab in the stomach.";
	string enemyWords_4 = "Hit you on the leg.";
	string enemyWords_5 = "You don’t learn from your mistakes, striking again.";
	string enemyWords_6 = "You thought and your finger was broken.";

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


void fight(Character& yourChar, const Monstr& yourEnemy)
{
	setlocale(LC_ALL, "ru");
	short playerHP = yourChar.get_maxHealthPoints();
	short enemyHP = yourEnemy.get_maxHealthPoints();
	bool flagCharDamage = 1;
	while ( playerHP > 0 && enemyHP > 0 )
	{

		if ( flagCharDamage )
		{
			short damage = yourChar.characterDamage();
			cout << yourDialog() << endl;
			enemyHP -= damage;

			if (enemyHP < 0)
			{
				enemyHP = 0;
			}

			cout << "The enemy received: " << damage << " unit of damage, lives left: " << enemyHP << endl;
			flagCharDamage = false;
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
			cout << "You received: " << damage << " unit of damage, lives left: " << playerHP << endl;
			flagCharDamage = true;
		}

	}

    
	if ( enemyHP == 0 )
	{
		cout << "Unfortunately, you won, take your money." << endl;
		yourChar.set_characterMoney( yourChar.get_characterMoney() + yourEnemy.get_monstrPrice() );
		yourChar.set_killingsNumber(yourChar.get_killingsNumber() + 1);
	}
	else
	{
		cout << "AHAHAHA, you lost." << endl;
	}
	

}