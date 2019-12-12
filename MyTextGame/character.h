#pragma once
#include <string>
#include "dealingDamage.h"
#include "massiveWeapon.h"
#include <fstream>

using namespace std;
class Character
{

protected:
	massiveWeapon weapons;
	short killingsNumber;
	short maxHealthPoints;
	short weaponID;
	short basicStat;
	short characterMoney;
	bool keyForest;
	bool keyWindField;
	string nameCharacter;
	friend ostream& operator<< (ostream& fileOutputStream, const Character& objectOfCharacter);
	friend istream& operator>> (istream& fileInputStream, Character& objectOfCharacter);
public:

	short get_killingsNumber() const;
	short get_maxHealthPoints() const;
	short get_weaponID() const;
	short get_basicStat() const;
	short get_characterMoney() const;
	bool get_keyForest() const;
	bool get_keyWindField() const;
	string get_nameCharacter() const;

	void printWeapons();

	void set_killingsNumber(short killingsNumber);
	void set_maxHealthPoints(short maxHealthPoints);	
	void set_weaponID(short maxHealthPoints);	
	void set_basicStat(short basicStat);	
	void set_characterMoney(short characterMoney);	
	void set_keyForest(bool keyForest);	
	void set_keyWindField(bool keyWindField);
	string set_nameCharacter(string nameCharacter);

	void showCharacter();

	virtual short characterDamage() = 0;
};



class Warrior : public Character
{
public:
	Warrior();
	short characterDamage() override;
	Warrior& operator= (const Warrior& otherWar);

};

class Rogue : public Character
{
public:
	Rogue();
	short characterDamage() override;
	Rogue& operator= (const Rogue& otherRogue);
};

class Monk : public Character
{
public:
	Monk();
	short characterDamage() override;
	Monk& operator= (const Monk& otherMonk);
};