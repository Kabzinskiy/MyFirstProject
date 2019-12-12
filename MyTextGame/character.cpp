#include "character.h"

short Character::get_killingsNumber() const
    {
		return killingsNumber;
    }
	
short Character::get_maxHealthPoints() const
	{
		return maxHealthPoints;
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
	cout << "Your name is:" << nameCharacter << endl;
	cout << "Number of kills: " << killingsNumber << endl;
	cout << "Amount of money: " << characterMoney << endl;
	cout << "Life Amount: " << maxHealthPoints << endl;
	cout << "Your main characteristic: " << basicStat << endl;

	if (keyForest)
	{
		cout << "You have a key to the Forest." << endl;
	}
	else
	{
		cout << "You haven`t a key to the Forest." << endl;
	}

	if (keyWindField)
	{
		cout << "You have the key to the Wind Fields." << endl;
	}
	else
	{
		cout << "You haven`t the key to the Wind Fields." << endl;
	}

	(weapons.funcReturnWeapon(weaponID)).printWeapon();
}



void Character::printWeapons()
	{
		weapon tempWeapon;
		tempWeapon = weapons.funcReturnWeapon(weaponID);
		tempWeapon.printWeapon();
		
	}
																				


	void Character::set_killingsNumber(short killingsNumber)
	{
		this->killingsNumber = killingsNumber;
	}
   
	void  Character::set_maxHealthPoints(short hillPoints)
	{
		this->maxHealthPoints = hillPoints;
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
	
	 

	Warrior::Warrior()
	{
		this->killingsNumber = 0;
		this->maxHealthPoints = 150;
		this->weaponID = 0;
		this->basicStat = 8;
		this->characterMoney = 0;
		this->keyForest = false;
		this->keyWindField = false;
		string nameCharacter = "name";
	}

	Warrior& Warrior::operator= (const Warrior& otherWar)
	{
		this->killingsNumber = otherWar.killingsNumber;
		this->maxHealthPoints = otherWar.maxHealthPoints;
		this->weaponID = otherWar.weaponID;
		this->basicStat = otherWar.basicStat;
		this->characterMoney = otherWar.characterMoney;
		this->keyForest = otherWar.keyForest;
		this->keyWindField = otherWar.keyWindField;
		string nameCharacter = otherWar.nameCharacter;
		return *this;
	}

	short Warrior::characterDamage()
    {
		weapon tempWeapon( this->weapons.funcReturnWeapon(this->weaponID) );
		return dealingDamage(4 * (this->basicStat), tempWeapon.get_percentDamage());
    }
	

	Rogue::Rogue()
	{
		this->killingsNumber = 0;
		this->maxHealthPoints = 100;
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
		this->maxHealthPoints = otherRogue.maxHealthPoints;
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
		weapon tempWeapon( this->weapons.funcReturnWeapon(this->weaponID) );
		return dealingDamage(this->basicStat, 4 * (tempWeapon.get_percentDamage()));
	}


	Monk::Monk()
	{
		this->killingsNumber = 0;
		this->maxHealthPoints = 130;
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
		this->maxHealthPoints = otherMonk.maxHealthPoints;
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
		weapon tempWeapon( this->weapons.funcReturnWeapon(this->weaponID) );
		return dealingDamage(2 * (this->basicStat), 2 * (tempWeapon.get_percentDamage()));
	}

