#include "funcStartMeadow.h"

void funcStartMeadow(Character& yourPerson)
{
	cout << "Ну что же, вот вы и на лугу. Вам не терпится с кем-нибудь сразится." << endl;
	cout << "Пусть это будет кто-нибудь достойный, думается Вам." << endl;
	cout << "Вы осторожно ползете по траве, пытаясь отследить малейшие колебания густых зарослей." << endl;

	

	Monstr butterfly;
	butterfly.set_basicMonstrStat(15);
	butterfly.set_maxHillPoints(180);
	butterfly.set_monstrPrice(10);

	Monstr frog;
	frog.set_basicMonstrStat(25);
	frog.set_maxHillPoints(250);
	frog.set_monstrPrice(15);

	Monstr humster;
	humster.set_basicMonstrStat(30);
	humster.set_maxHillPoints(360);
	humster.set_monstrPrice(20);

	Monstr rat;
	rat.set_basicMonstrStat(35);
	rat.set_maxHillPoints(450);
	rat.set_monstrPrice(30);



	short random = rand() % 4;
	switch (random)
	{
	case 0:
		cout << "Ну что ж, настал Ваш миг триумфа!!! Ваш противник - бабочка!" << endl;
		fightFunction( yourPerson, butterfly );
		break;
	case 1:
		cout << "Ну что ж, настал Ваш миг триумфа!!! Ваш противник - лягушка!" << endl;
		fightFunction(yourPerson, frog);
		break;
	case 2:
		cout << "Ну что ж, настал Ваш миг триумфа!!! Ваш противник - хомяк!" << endl;
		fightFunction(yourPerson, humster);
		break;
	default:
		cout << "Ну что ж, настал Ваш миг триумфа!!! Ваш противник - крыса!" << endl;
		fightFunction(yourPerson, rat);
		break;
	}


	cout << "Баюкая свои ранки, вы идите обратно." << endl;

system("pause");
}