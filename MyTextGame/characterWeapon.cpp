#include "characterWeapon.h"

    void CharacterWeapon::set_procentDamage(short procentDamage)
	{
		this->procentDamage = procentDamage;
	}

	void CharacterWeapon::set_idWeapon(short idWeapon)
	{
		this->idWeapon = idWeapon;
	}

	void CharacterWeapon::set_weaponName(std::string weaponName)
	{
		this->weaponName = weaponName;
	}




	short CharacterWeapon::get_procentDamage() const
	{
		return procentDamage;
	}

	std::string CharacterWeapon::get_weaponName() const
	{
		return weaponName;
	}

	short CharacterWeapon::get_idWeapon() const
	{
		return idWeapon;
	}



	void CharacterWeapon::printWeapon() const
	{
		setlocale(LC_ALL, "rus");
		std::cout << "Название оружия: " << weaponName << std::endl << "Коэффициент атаки: " << procentDamage << std::endl;
	}