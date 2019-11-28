#include "includeFile.h"

/*
This is my first project, and I have to apologize to you.
I suspect that I made a lot of mistakes in my coding style).
I hope in a few weeks I will do it better.
*/

int main(){
	setlocale(LC_ALL, "ru");
	Character* person;
	person = startChoiseFunc();
	string menuChoise;
	while (menuChoise != "7")
	{
		system("cls");
		cout << "¬водишь 1 дл€ похода в магазин." << endl;
		cout << "¬водишь 2 дл€ того, чтобы охотитс€ на лугу." << endl;
		cout << "¬водишь 3 дл€ того, чтобы охотитс€ в лесу." << endl;
		cout << "¬водишь 4 дл€ того, чтобы охотитс€ на ветр€ных пол€х." << endl;
		cout << "¬водишь 5 дл€ того, чтобы просмотреть информацию о персонаже." << endl;
		cout << "¬водишь 6 дл€ того, чтобы сохранитьс€." << endl;
		cout << "¬водишь 7 дл€ того, чтобы выйти." << endl;


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