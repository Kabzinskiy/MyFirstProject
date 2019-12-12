#include "store.h"

void openStore( Character& yourCharacter )
{
	system("cls");

	cout << "You are in a magic store." << endl;
	cout << "The warrior is more dependent on the main characteristics." << endl;
	cout << "The warrior is more dependent on the main weapon." << endl;
	cout << "The monk is equivalent." << endl;

	string choise = "1";
	

	while (choise == "1" || choise == "2" || choise == "3" || choise == "4" || choise == "5")

	{
		int cost = 0;
		cout << "Your money is equal " << yourCharacter.get_characterMoney() << endl;
		cout << "To add health, enter 1 - it costs 30 gold for 10 units. " << endl;
		cout << "Enter 2 to increase your basic stat for 90 gold." << endl;
		cout << "Enter 3 to increase the level of weapons (120 gold per level)." << endl;
		cout << "Enter 4 to get the magic key to the forest costs 500 gold." << endl;
		cout << "Enter 5, if you want to get a magic key from the wind fields, it costs 1000 gold." << endl;
		cout << "To exit, press 6." << endl;

		cin >> choise;

		if (choise == "1")

		{
			cout << "Your health is " << yourCharacter.get_maxHealthPoints() << " points." << endl;
			cout << "And so, you want to add your health. How much are you willing to spend on it?" << endl;
			cin >> cost;
			if ((yourCharacter.get_characterMoney() - cost) >= 0)
			{
				short factorHealth = cost / 30;
				short realCost = factorHealth * 30;
				yourCharacter.set_characterMoney(yourCharacter.get_characterMoney() - realCost);
				yourCharacter.set_maxHealthPoints(yourCharacter.get_maxHealthPoints() + (factorHealth * 10));
				cout << "We took from you " << realCost << " gold and added " << factorHealth * 10 << " points." << endl;
			}
			else
			{
				cout << "You do not have the necessary money!" << endl;
			}
		}

		else if (choise == "2")

		{
			cout << "Your main characteristic is " << yourCharacter.get_basicStat() << endl;
			cout << "And so, you wish to increase the characteristic. How much are you willing to spend on this?" << endl;
			cin >> cost;
			if ((yourCharacter.get_characterMoney() - cost) >= 0)
			{
				short factorStat = cost / 90;
				short realCost = factorStat * 90;
				yourCharacter.set_characterMoney(yourCharacter.get_characterMoney() - realCost);
				yourCharacter.set_basicStat(yourCharacter.get_basicStat() + factorStat);
				cout << "We took from you " << realCost << " gold and raised the characteristic to " << factorStat << endl;
			}
			else
			{
				cout << "You do not have the necessary money!" << endl;
			}
		}

		else if (choise == "3")

		{

			if (yourCharacter.get_weaponID() < 9)
			{
				yourCharacter.printWeapons();
				cout << "Weapons can only be upgraded at level 1." << endl;
				cout << "You want to improve weapons. We recommend introducing 120 gold." << endl;
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
					cout << "You do not have the necessary money!" << endl;
				}

			}
			else
			{
				cout << "Sorry, but you have reached the maximum level of weapons. Try to improve something else." << endl;
			}
		}

		else if (choise == "4")

		{
			cout << "You can buy the key to the Forest as much as you like, but do you need it?" << endl;
			cout << "You want to purchase a key. How much are you willing to spend on this?" << endl;
			cin >> cost;
			if ( ( (yourCharacter.get_characterMoney() - cost ) >= 0 ) && cost >= 500 )
			{
				yourCharacter.set_characterMoney(yourCharacter.get_characterMoney() - cost);
				yourCharacter.set_keyForest(true);
			}
			else
			{
				cout << "You do not have the necessary money!" << endl;
			}
		}

		else if (choise == "5")

		{
			cout << "You can buy the key to the Wind Fields as much as you like, but do you need it?" << endl;
			cout << "You want to purchase a key. How much are you willing to spend on it?" << endl;
			cin >> cost;

			if ( ( (yourCharacter.get_characterMoney() - cost) >= 0) && cost >= 1000 )
			{
				yourCharacter.set_characterMoney( yourCharacter.get_characterMoney() - cost );
				yourCharacter.set_keyWindField(true);
			}

			else
			{
				cout << "You don`t have the necessary money!" << endl;
			}
		}

	

	}

}