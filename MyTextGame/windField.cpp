#include "windField.h"

void funcWindField(Character& yourPerson)
{
	bool key;
	key = yourPerson.get_keyWindField();

	if (key)

	{

		cout << "Вы пришли на ветряные поля и с опаской смотрите на большие заросли." << endl;
		cout << "Лишь бы опять не отхватить, думаете Вы." << endl;
		cout << "Вы по миллиметру крадетесь среди зарослей." << endl;



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
			cout << "Ну что ж, настал Ваш миг триумфа!!! Ваш противник - кролик!" << endl;
			fightFunction(yourPerson, rabbit);
			break;
		case 1:
			cout << "Ну что ж, настал Ваш миг триумфа!!! Ваш противник - енот!" << endl;
			fightFunction(yourPerson, raccoon);
			break;
		case 2:
			cout << "Ну что ж, настал Ваш миг триумфа!!! Ваш противник - рысь!" << endl;
			fightFunction(yourPerson, lynx);
			break;
		default:
			cout << "Ну что ж, настал Ваш миг триумфа!!! Ваш противник - волк!" << endl;
			fightFunction(yourPerson, wolf);
			break;
		}


		cout << "Вы ползете домой в слезах." << endl;


	}

	else
	{
		cout << "Простите, но для прохода на данную локацию необходимо приобрести ключ." << endl;
	}

system("pause");
}