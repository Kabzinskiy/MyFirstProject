#include "startChoise.h"

Character* startChoise()
{
	string choiseLoad;
	cout << "If you want to load the warrior, enter 1. Rogue - 2, Monk - 3." << endl;
	cout << "Enter anything to create a character." << endl;

	cin >> choiseLoad;

	if      ( choiseLoad == "1" )
	        {
		        Character* tempLoadCharacter = new Warrior;
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
		        cout << "If you want to create the warrior, enter 1. Rogue - 2, Monk - 3." << endl;
		        cout << "You can write at least hieroglyphs in the Djunai dialect, but then I will give you only a warrior." << endl;
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
				      	   return createWarrior();
				        }

	        }
}