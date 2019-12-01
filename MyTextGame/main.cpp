#include "includeFile.h"

int main(){
	setlocale(LC_ALL, "ru");
	Character* person;
	person = startChoiseFunc();
	string menuChoise;

	while (menuChoise != "7")
	{
		system("cls");
		cout << "Вводишь 1 для похода в магазин." << endl;
		cout << "Вводишь 2 для того, чтобы охотится на лугу." << endl;
		cout << "Вводишь 3 для того, чтобы охотится в лесу." << endl;
		cout << "Вводишь 4 для того, чтобы охотится на ветряных полях." << endl;
		cout << "Вводишь 5 для того, чтобы просмотреть информацию о персонаже." << endl;
		cout << "Вводишь 6 для того, чтобы сохраниться." << endl;
		cout << "Вводишь 7 для того, чтобы выйти." << endl;


		cin >> menuChoise;

		if (menuChoise == "1")
		{
			openStore(*person);
		}
		else if (menuChoise == "2")
		{
			funcStartMeadow(*person);
		}
		else if (menuChoise == "3")
		{
			funcForest(*person);
		}
		else if (menuChoise == "4")
		{
			funcWindField(*person);
		}
		else if (menuChoise == "5")
		{
			(*person).showCharacter();
			system("pause");
		}
		else if (menuChoise == "6")
		{
			saveCharacterToFile(*person);
			system("pause");
		}

	}


	saveCharacterToFile(*person);
	releaseOfCharacterMemory(person);
	system("pause");
	return 0;
}