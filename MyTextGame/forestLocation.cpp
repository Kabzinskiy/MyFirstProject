#include "forestLocation.h"

void funcForest(Character& yourPerson)
{
	bool key;
	key = yourPerson.get_keyForest();

	if (key)

	{

		cout << "Ну что же, вот вы и в лесу. Вам не терпится от кого-нибудь отгрести." << endl;
		cout << "Пусть это будет кто-нибудь достойный, думаете Вы." << endl;
		cout << "Вы осторожно крадетесь меж деревьев, пытаясь увидеть своего следующего врага." << endl;



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
			cout << "Ну что ж, настал Ваш миг триумфа!!! Ваш противник - ящерица!" << endl;
			fightFunction(yourPerson, lizard);
			break;
		case 1:
			cout << "Ну что ж, настал Ваш миг триумфа!!! Ваш противник - белка!" << endl;
			fightFunction(yourPerson, squirrel);
			break;
		case 2:
			cout << "Ну что ж, настал Ваш миг триумфа!!! Ваш противник - дятел!" << endl;
			fightFunction(yourPerson, woodpecker);
			break;
		default:
			cout << "Ну что ж, настал Ваш миг триумфа!!! Ваш противник - змея!" << endl;
			fightFunction(yourPerson, snake);
			break;
		}


		cout << "Плача и рыдая, вы идите домой." << endl;


	}

	else
	{
		cout << "Простите, но для прохода на данную локацию необходимо приобрести ключ." << endl;
	}
	
system("pause");
}