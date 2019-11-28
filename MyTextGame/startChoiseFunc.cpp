#include "startChoiseFunc.h"

Character* startChoiseFunc()
{
	string choiseLoad;
	cout << "Если хочешь загрузить воина, введи 1. На вора вводишь 2, а на Монаха 3." << endl;
	cout << "Для создания персонажа вводи что угодно." << endl;

	cin >> choiseLoad;

	if      ( choiseLoad == "1" )
	        {
		        Character* tempLoadCharacter = new War;
				loadCharacterFromFile( *tempLoadCharacter );
				return tempLoadCharacter;
	        }

	else if ( choiseLoad == "2" )
	        {
		        Character* tempLoadCharacter = new Rogue;
				loadCharacterFromFile(*tempLoadCharacter);
				return tempLoadCharacter;
 	        }

	else if ( choiseLoad == "3" )
	        {
		        Character* tempLoadCharacter = new Monk;
				loadCharacterFromFile(*tempLoadCharacter);
				return tempLoadCharacter;
	        }

	else    {
		        cout << "Ну, тут все по аналогии, хочешь создать воина, введи 1. На вора вводишь 2, а на Монаха 3." << endl;
		        cout << "Можешь прописать хоть иероглифы на джунайском наречии, но тогда я дам тебе только воина." << endl;
				string choiseCreate;
				cin >> choiseCreate;
				
				if      ( choiseCreate == "2" )
				        {
					       return createRogue();
				        }

				else if ( choiseCreate == "3" )
				        {
			         	   return createMonk();
				        }

				else    {
				      	   return createWar();
				        }

	        }
}