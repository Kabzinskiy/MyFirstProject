#include "windFieldLocation.h"

void startWindField(Character& yourPerson)
{
	bool key;
	key = yourPerson.get_keyWindField();

	if (key)

	{

		cout << "You came to wind fields and cautiously look at large thickets." << endl;
		cout << "You are slipping a millimeter among the thickets." << endl;



		Monstr rabbit;
		rabbit.set_basicMonstrStat(70);
		rabbit.set_maxHealthPoints(1000);
		rabbit.set_monstrPrice(180);

		Monstr raccoon;
		raccoon.set_basicMonstrStat(80);
		raccoon.set_maxHealthPoints(1100);
		raccoon.set_monstrPrice(200);

		Monstr lynx;
		lynx.set_basicMonstrStat(100);
		lynx.set_maxHealthPoints(1500);
		lynx.set_monstrPrice(250);

		Monstr wolf;
		wolf.set_basicMonstrStat(150);
		wolf.set_maxHealthPoints(2000);
		wolf.set_monstrPrice(400);



		short random = rand() % 4;
		switch (random)
		{
		case 0:
			cout << "Well, your moment of triumph has come !!! Your opponent is a rabbit!" << endl;
			fight(yourPerson, rabbit);
			break;
		case 1:
			cout << "Well, your moment of triumph has come !!! Your opponent is a raccoon!" << endl;
			fight(yourPerson, raccoon);
			break;
		case 2:
			cout << "Well, your moment of triumph has come !!! Your opponent is a lynx!" << endl;
			fight(yourPerson, lynx);
			break;
		default:
			cout << "Well, your moment of triumph has come !!! Your opponent is a wolf!" << endl;
			fight(yourPerson, wolf);
			break;
		}


		cout << "You creep home in tears." << endl;


	}

	else
	{
		cout << "Sorry, but to enter this location you need to purchase a key." << endl;
	}

system("pause");
}