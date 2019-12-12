#include "meadowLocation.h"

void startMeadow(Character& yourPerson)
{
	cout << "You are in the meadow. You can’t wait to fight with someone." << endl;
	cout << "You carefully crawl along the grass, trying to track the slightest fluctuations of dense thickets." << endl;

	

	Monstr butterfly;
	butterfly.set_basicMonstrStat(15);
	butterfly.set_maxHealthPoints(180);
	butterfly.set_monstrPrice(10);

	Monstr frog;
	frog.set_basicMonstrStat(25);
	frog.set_maxHealthPoints(250);
	frog.set_monstrPrice(15);

	Monstr humster;
	humster.set_basicMonstrStat(30);
	humster.set_maxHealthPoints(360);
	humster.set_monstrPrice(20);

	Monstr rat;
	rat.set_basicMonstrStat(35);
	rat.set_maxHealthPoints(450);
	rat.set_monstrPrice(30);



	short random = rand() % 4;
	switch (random)
	{
	case 0:
		cout << "Well, your moment of triumph has come !!! Your opponent is a butterfly!" << endl;
		fight( yourPerson, butterfly );
		break;
	case 1:
		cout << "Well, your moment of triumph has come !!! Your opponent is a frog!" << endl;
		fight(yourPerson, frog);
		break;
	case 2:
		cout << "Well, your moment of triumph has come !!! Your opponent is a hamster!" << endl;
		fight(yourPerson, humster);
		break;
	default:
		cout << "Well, your moment of triumph has come !!! Your opponent is a rat!" << endl;
		fight(yourPerson, rat);
		break;
	}


	cout << "You go back to lick your wounds." << endl;

system("pause");
}