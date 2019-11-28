#include "store.h"

void openStore( Character& yourCharacter )
{
	system("cls");
	setlocale(LC_ALL, "ru");

	cout << "Ну, вот Вы и в магическом магазине." << endl;
	cout << "Небольшой совет, воин больше зависит от основной характеристики." << endl;
	cout << "Разбойник от оружия." << endl;
	cout << "Монах зависим в равной степени, как от оружия, так и от характеристики. " << endl;

	string choise = "1";
	

	while (choise == "1" || choise == "2" || choise == "3" || choise == "4" || choise == "5")

	{
		int cost = 0;
		cout << "Ваши сбережения равны " << yourCharacter.get_characterMoney() << endl;
		cout << "Чтобы поправить здоровьишко, вводите 1 - стоит 30 золотых за 10 едениц. " << endl;
		cout << "Чтобы увеличить свою основную характеристику за 90 золотых - вводите 2." << endl;
		cout << "Для увеличения уровня оружия (120 золотых за уровень) - 3." << endl;
		cout << "Магический ключ от леса стоит 500 золотых - вводите 4." << endl;
		cout << "Магический ключ от ветряных полей стоит 1000 золотых - вводите 5." << endl;
		cout << "Для выхода жмите 6." << endl;

		cin >> choise;

		if (choise == "1")

		{
			cout << "Ваше здоровье составляет " << yourCharacter.get_maxHillPoints() << " еденицы." << endl;
			cout << "И так, Вы желаете прибавить здоровье. Сколько Вы готовы на это потратить?" << endl;
			cin >> cost;
			if ((yourCharacter.get_characterMoney() - cost) >= 0)
			{
				short factorHealth = cost / 30;
				short realCost = factorHealth * 30;
				yourCharacter.set_characterMoney(yourCharacter.get_characterMoney() - realCost);
				yourCharacter.set_maxHillPoints(yourCharacter.get_maxHillPoints() + (factorHealth * 10));
				cout << "Мы взяли у Вас " << realCost << " золотых и добавили " << factorHealth * 10 << " жизней." << endl;
			}
			else
			{
				cout << "У Вас нет необходимой суммы!" << endl;
			}
		}

		else if (choise == "2")

		{
			cout << "Ваша основная характеристика равна " << yourCharacter.get_basicStat() << endl;
			cout << "И так, Вы желаете ее увеличить. Сколько Вы готовы на это потратить?" << endl;
			cin >> cost;
			if ((yourCharacter.get_characterMoney() - cost) >= 0)
			{
				short factorStat = cost / 90;
				short realCost = factorStat * 90;
				yourCharacter.set_characterMoney(yourCharacter.get_characterMoney() - realCost);
				yourCharacter.set_basicStat(yourCharacter.get_basicStat() + factorStat);
				cout << "Мы взяли у Вас " << realCost << " золотых и подняли характеристику на " << factorStat << endl;
			}
			else
			{
				cout << "У Вас нет необходимой суммы!" << endl;
			}
		}

		else if (choise == "3")

		{

			if (yourCharacter.get_weaponID() < 9)
			{
				yourCharacter.printWeapons();
				cout << "Оружие можно улучшать только по 1 уровню. " << endl;
				cout << "И так, Вы желаете улучшить оружие. Советуем ввести 120 золотых." << endl;
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
					cout << "У Вас нет необходимой суммы!" << endl;
				}

			}
			else
			{
				cout << "Простите, но Вы достигли максимального уровня оружия. Попробуйте улучшить что-нибудь другое." << endl;
			}
		}

		else if (choise == "4")

		{
			cout << "Вы можете покупать ключ от Леса сколько угодно, но надо ли оно Вам?" << endl;
			cout << "И так, Вы желаете приобрести ключ. Сколько Вы готовы на это потратить?" << endl;
			cin >> cost;
			if ( ( (yourCharacter.get_characterMoney() - cost ) >= 0 ) && cost >= 500 )
			{
				yourCharacter.set_characterMoney(yourCharacter.get_characterMoney() - cost);
				yourCharacter.set_keyForest(true);
			}
			else
			{
				cout << "У Вас нет необходимой суммы!" << endl;
			}
		}

		else if (choise == "5")

		{
			cout << "Вы можете покупать ключ от Ветряных Полей сколько угодно, но надо ли оно Вам?" << endl;
			cout << "И так, Вы желаете приобрести ключ. Сколько Вы готовы на это потратить?" << endl;
			cin >> cost;

			if ( ( (yourCharacter.get_characterMoney() - cost) >= 0) && cost >= 1000 )
			{
				yourCharacter.set_characterMoney( yourCharacter.get_characterMoney() - cost );
				yourCharacter.set_keyWindField(true);
			}

			else
			{
				cout << "У Вас нет необходимой суммы!" << endl;
			}
		}

	

	}

}