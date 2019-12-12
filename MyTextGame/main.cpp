#include "includeFile.h"

int main(){
	Character* person;
	person = startChoise();
	string menuChoise;

	while (menuChoise != "7")
	{
		system("cls");
		cout << "Enter 1 to go to the store." << endl;
		cout << "Enter 2 in order to hunt in the meadow." << endl;
		cout << "Enter 3 in order to hunt in the forest." << endl;
		cout << "Enter 4 in order to hunt in the wind fields." << endl;
		cout << "Enter 5 in order to view information about the character." << endl;
		cout << "Enter 6 in order to save." << endl;
		cout << "Enter 7 in order to exit." << endl;


		cin >> menuChoise;

		if (menuChoise == "1")
		{
			openStore(*person);
		}
		else if (menuChoise == "2")
		{
			startMeadow(*person);
		}
		else if (menuChoise == "3")
		{
			startForest(*person);
		}
		else if (menuChoise == "4")
		{
			startWindField(*person);
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