#include "startChoiseFunc.h"

Character* startChoiseFunc()
{
	string choiseLoad;
	cout << "���� ������ ��������� �����, ����� 1. �� ���� ������� 2, � �� ������ 3." << endl;
	cout << "��� �������� ��������� ����� ��� ������." << endl;

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
		        cout << "��, ��� ��� �� ��������, ������ ������� �����, ����� 1. �� ���� ������� 2, � �� ������ 3." << endl;
		        cout << "������ ��������� ���� ��������� �� ���������� �������, �� ����� � ��� ���� ������ �����." << endl;
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