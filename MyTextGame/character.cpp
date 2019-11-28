#include "character.h"

short Character::get_killingsNumber() const
    {
		return killingsNumber;
    }
	
short Character::get_maxHillPoints() const
	{
		return maxHillPoints;
	}

short Character::get_weaponID() const
	{
		return weaponID;
	}

short Character::get_basicStat() const
    {
		return basicStat;
    }

short Character::get_characterMoney() const
	{
		return characterMoney;
	}

bool Character::get_keyForest() const
	{
		return keyForest;
	}

bool Character::get_keyWindField() const
	{
		return keyWindField;
	}

string Character::get_nameCharacter() const
	{
		return nameCharacter;
	}



void Character::showCharacter()
{
	cout << "Ваше имя: " << nameCharacter << endl;
	cout << "Количество убийств: " << killingsNumber << endl;
	cout << "Количество денег: " << characterMoney << endl;
	cout << "Количество жизни: " << maxHillPoints << endl;
	cout << "Ваша основная характеристика: " << basicStat << endl;

	if (keyForest)
	{
		cout << "Имеется ключ от Леса." << endl;
	}
	else
	{
		cout << "Нету ключа от Леса." << endl;
	}

	if (keyWindField)
	{
		cout << "Имеется ключ от Ветряных Полей." << endl;
	}
	else
	{
		cout << "Нету ключа от Ветряных Полей." << endl;
	}

	(weapons.funcReturnWeapon(weaponID)).printWeapon();
}



void Character::printWeapons()
	{
		CharacterWeapon tempWeapon;
		tempWeapon = weapons.funcReturnWeapon(weaponID);
		tempWeapon.printWeapon();
		
	}
																				


	void Character::set_killingsNumber(short killingsNumber)
	{
		this->killingsNumber = killingsNumber;
	}
   
	void  Character::set_maxHillPoints(short hillPoints)
	{
		this->maxHillPoints = hillPoints;
	}

	void  Character::set_weaponID(short hillPoints)
	{
		this->weaponID = hillPoints;
	}
	
	void Character::set_basicStat(short basicStat)
	{
		this->basicStat = basicStat;
	}
	
	void Character::set_characterMoney(short characterMoney)
	{
		this->characterMoney = characterMoney;
	}
	
	void Character::set_keyForest(bool keyForest)
	{
		this->keyForest = keyForest;
	}
	
	void Character::set_keyWindField(bool keyWindField)
	{
		this->keyWindField = keyWindField;
	}
	
	string Character::set_nameCharacter(string nameCharacter)
	{
		return (this->nameCharacter = nameCharacter);
	}
	
	 

	War::War()
	{
		this->killingsNumber = 0;
		this->maxHillPoints = 150;
		this->weaponID = 0;
		this->basicStat = 8;
		this->characterMoney = 0;
		this->keyForest = false;
		this->keyWindField = false;
		string nameCharacter = "name";
	}

	War& War::operator= (const War& otherWar)
	{
		this->killingsNumber = otherWar.killingsNumber;
		this->maxHillPoints = otherWar.maxHillPoints;
		this->weaponID = otherWar.weaponID;
		this->basicStat = otherWar.basicStat;
		this->characterMoney = otherWar.characterMoney;
		this->keyForest = otherWar.keyForest;
		this->keyWindField = otherWar.keyWindField;
		string nameCharacter = otherWar.nameCharacter;
		return *this;
	}

	short War::characterDamage() 
    {
		CharacterWeapon tempWeapon( this->weapons.funcReturnWeapon(this->weaponID) );
	    return dealingDamage( 4 *( this->basicStat), tempWeapon.get_procentDamage() );
    }
	

	Rogue::Rogue()
	{
		this->killingsNumber = 0;
		this->maxHillPoints = 100;
		this->weaponID = 0;
		this->basicStat = 15;
		this->characterMoney = 0;
		this->keyForest = false;
		this->keyWindField = false;
		string nameCharacter = "name";
	}

	Rogue& Rogue::operator= (const Rogue& otherRogue)
	{
		this->killingsNumber = otherRogue.killingsNumber;
		this->maxHillPoints = otherRogue.maxHillPoints;
		this->weaponID = otherRogue.weaponID;
		this->basicStat = otherRogue.basicStat;
		this->characterMoney = otherRogue.characterMoney;
		this->keyForest = otherRogue.keyForest;
		this->keyWindField = otherRogue.keyWindField;
		string nameCharacter = otherRogue.nameCharacter;
		return *this;
	}

	short Rogue::characterDamage()
	{
		CharacterWeapon tempWeapon( this->weapons.funcReturnWeapon(this->weaponID) );
		return dealingDamage( this->basicStat, 4 * (tempWeapon.get_procentDamage()) );
	}


	Monk::Monk()
	{
		this->killingsNumber = 0;
		this->maxHillPoints = 130;
		this->weaponID = 0;
		this->basicStat = 9;
		this->characterMoney = 0;
		this->keyForest = false;
		this->keyWindField = false;
		string nameCharacter = "name";
	}

	Monk& Monk::operator= (const Monk& otherMonk)
	{
		this->killingsNumber = otherMonk.killingsNumber;
		this->maxHillPoints = otherMonk.maxHillPoints;
		this->weaponID = otherMonk.weaponID;
		this->basicStat = otherMonk.basicStat;
		this->characterMoney = otherMonk.characterMoney;
		this->keyForest = otherMonk.keyForest;
		this->keyWindField = otherMonk.keyWindField;
		string nameCharacter = otherMonk.nameCharacter;
		return *this;
	}

	short Monk::characterDamage()
	{
		CharacterWeapon tempWeapon( this->weapons.funcReturnWeapon(this->weaponID) );
		return dealingDamage( 2 * (this->basicStat), 2 * ( tempWeapon.get_procentDamage() ) );
	}

