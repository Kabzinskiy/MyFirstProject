#include "fightFunction.h"

string yourDialog()
{
	int kubik;
	string yourWords_1 = "Ты плюешь во врага.";
	string yourWords_2 = "Враг делает финт ушами, но это не спасает его от звонкой пощечины.";
	string yourWords_3 = "Ты так сильно удивил врага, что его глаза вываливаются из орбит.";
	string yourWords_4 = "Визгливо крича, ты пытаешься достать врага оружием. Ты только чудом смог попасть по нему. ";
	string yourWords_5 = "Ты встаешь в соблазнительную позу, а когда враг приближается, ты наносишь жесткий удар по его самолюбию.";
	string yourWords_6 = "Своими умениями ты разочаровал врага, он получает урон от расстройства.";
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

	string enemyWords_1 = "Противник рассказывает тебе анекдот. Пока ты смеешься, он бьет тебя оглоблей по голове.";
	string enemyWords_2 = "Не стоило недооценивать врага, от удара ты улетаешь на три метра.";
	string enemyWords_3 = "Враг смеется над твоими характеристиками, ты получаешь серьезный удар по самооценке.";
	string enemyWords_4 = "\"Мама, спаси!!! \" молишься ты, пролетая над терновым кустом от щелбана своего врага.";
	string enemyWords_5 = "Ты не учишься на своих ошибках, в очередной раз получая на орехи.";
	string enemyWords_6 = "\"И зачем я пришел сюда \" думаешь ты, получая пинка под зад от противника.";

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

			cout << "Враг получил " << damage << " едениц урона, жизней осталось: " << enemyHP << endl;
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
			cout << "Вы получили " << damage << " едениц урона, жизней осталось: " << playerHP << endl;
		}

        counter++;
	}

    
	if ( enemyHP == 0 )
	{
		cout << "Как это не прискорбно, но вы победили, забирайте свои деньги." << endl;
		yourChar.set_characterMoney( yourChar.get_characterMoney() + yourEnemy.get_monstrPrice() );
		yourChar.set_killingsNumber(yourChar.get_killingsNumber() + 1);
	}
	else
	{
		cout << "Ну, вот вы и получили по носу, а нечего лезть куда не просят." << endl;
	}
	

}