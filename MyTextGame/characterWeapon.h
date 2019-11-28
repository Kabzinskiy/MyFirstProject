#pragma once
#include <string>
#include <iostream>


class CharacterWeapon
{
private:
	short idWeapon = 0;
	short procentDamage = 0;
	std::string weaponName = "Ничего";
public:
	void set_procentDamage(short procentDamage);
	void set_idWeapon(short idWeapon);
	void set_weaponName(std::string weaponName);

	short get_procentDamage() const;
	std::string get_weaponName() const;
	short get_idWeapon() const;

	void printWeapon() const;
};