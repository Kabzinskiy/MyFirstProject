#include "weapon.h"


weapon::weapon()
{
	this->idWeapon = 0;
	this->percentDamage = 0;
	this->weaponName = " ";
}

weapon::weapon(short idWeapon, short percentDamage, std::string weaponName)
{
	this->idWeapon = idWeapon;
	this->percentDamage = percentDamage;
	this->weaponName = weaponName;
}



void weapon::set_percentDamage(short percentDamage)
	{
	this->percentDamage = percentDamage;
	}

	void weapon::set_idWeapon(short idWeapon)
	{
		this->idWeapon = idWeapon;
	}

	void weapon::set_weaponName(std::string weaponName)
	{
		this->weaponName = weaponName;
	}




	short weapon::get_percentDamage() const
	{
		return percentDamage;
	}

	std::string weapon::get_weaponName() const
	{
		return weaponName;
	}

	short weapon::get_idWeapon() const
	{
		return idWeapon;
	}



	void weapon::printWeapon() const
	{
		setlocale(LC_ALL, "rus");
		std::cout << "Weapon Name: " << weaponName << std::endl << "Damage coefficient: " << percentDamage << std::endl;
	}