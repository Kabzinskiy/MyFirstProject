#pragma once
#include <string>
#include <iostream>


class weapon
{
private:
	short idWeapon = 0;
	short percentDamage = 0;
	std::string weaponName = "Ничего";
public:
	weapon();
	weapon(short, short, std::string);
	void set_percentDamage(short procentDamage);
	void set_idWeapon(short idWeapon);
	void set_weaponName(std::string weaponName);

	short get_percentDamage() const;
	std::string get_weaponName() const;
	short get_idWeapon() const;

	void printWeapon() const;
};