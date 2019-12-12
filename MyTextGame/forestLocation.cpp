#include "forestLocation.h"

void startForest(Character& yourPerson)
{
	bool key;
	key = yourPerson.get_keyForest();

	if (key)

	{

		cout << "You are in the forest. You can't wait to get a hit from someone." << endl;
		cout << "You creep cautiously between the trees, trying to see your next enemy." << endl;



		Monstr lizard;
		lizard.set_basicMonstrStat(40);
		lizard.set_maxHealthPoints(500);
		lizard.set_monstrPrice(50);

		Monstr squirrel;
		squirrel.set_basicMonstrStat(45);
		squirrel.set_maxHealthPoints(600);
		squirrel.set_monstrPrice(70);

		Monstr woodpecker;
		woodpecker.set_basicMonstrStat(50);
		woodpecker.set_maxHealthPoints(670);
		woodpecker.set_monstrPrice(90);

		Monstr snake;
		snake.set_basicMonstrStat(70);
		snake.set_maxHealthPoints(700);
		snake.set_monstrPrice(150);



		short random = rand() % 4;
		switch (random)
		{
		case 0:
			cout << "Well, your moment of triumph has come !!! Your opponent is a lizard!" << endl;
			fight(yourPerson, lizard);
			break;
		case 1:
			cout << "Well, your moment of triumph has come !!! Your opponent is a squirrel!" << endl;
			fight(yourPerson, squirrel);
			break;
		case 2:
			cout << "Well, your moment of triumph has come !!! Your opponent is a woodpecker!" << endl;
			fight(yourPerson, woodpecker);
			break;
		default:
			cout << "Well, your moment of triumph has come !!! Your opponent is a snake!" << endl;
			fight(yourPerson, snake);
			break;
		}


		cout << "You cry and go to home." << endl;


	}

	else
	{
		cout << "Sorry, but to enter this location you need to purchase a key." << endl;
	}
	
system("pause");
}