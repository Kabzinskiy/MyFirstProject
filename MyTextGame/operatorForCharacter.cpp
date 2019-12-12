#pragma once
#include "operatorForCharacter.h"


ostream& operator<< (ostream& fileOutputStream, const Character& objectOfCharacter)
{

	fileOutputStream << objectOfCharacter.killingsNumber << " " << objectOfCharacter.maxHealthPoints << " " << objectOfCharacter.weaponID
		<< " " << objectOfCharacter.basicStat << " " << objectOfCharacter.characterMoney << " "
		<< objectOfCharacter.keyForest << " " << objectOfCharacter.keyWindField << " " << objectOfCharacter.nameCharacter;
	return fileOutputStream;
}




istream& operator>> (istream& fileInputStream, Character& objectOfCharacter)
{

	fileInputStream >> objectOfCharacter.killingsNumber >> objectOfCharacter.maxHealthPoints 
		>> objectOfCharacter.weaponID >> objectOfCharacter.basicStat >> objectOfCharacter.characterMoney
		>> objectOfCharacter.keyForest >> objectOfCharacter.keyWindField >> objectOfCharacter.nameCharacter;
	return fileInputStream;
}