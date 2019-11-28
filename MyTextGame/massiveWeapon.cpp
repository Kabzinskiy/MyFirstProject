#include "massiveWeapon.h"


massiveWeapon::massiveWeapon()
{
	arrWeapon[0].set_idWeapon(0);
	arrWeapon[0].set_procentDamage(1);
	arrWeapon[0].set_weaponName( "Веточка" );

	arrWeapon[1].set_idWeapon(1);
	arrWeapon[1].set_procentDamage(2);
	arrWeapon[1].set_weaponName( "Тяжелая веточка" );

	arrWeapon[2].set_idWeapon(2);
	arrWeapon[2].set_procentDamage(3);
	arrWeapon[2].set_weaponName( "Палка" );

	arrWeapon[3].set_idWeapon(3);
	arrWeapon[3].set_procentDamage(4);
	arrWeapon[3].set_weaponName( "Трость старика" );

	arrWeapon[4].set_idWeapon(4);
	arrWeapon[4].set_procentDamage(5);
	arrWeapon[4].set_weaponName( "Костыль");

	arrWeapon[5].set_idWeapon(5);
	arrWeapon[5].set_procentDamage(6);
	arrWeapon[5].set_weaponName("Карниз");

	arrWeapon[6].set_idWeapon(6);
	arrWeapon[6].set_procentDamage(7);
	arrWeapon[6].set_weaponName( "Маленькое дерево" );

	arrWeapon[7].set_idWeapon(7);
	arrWeapon[7].set_procentDamage(8);
	arrWeapon[7].set_weaponName( "Среднее дерево" );

	arrWeapon[8].set_idWeapon(8);
	arrWeapon[8].set_procentDamage(9);
	arrWeapon[8].set_weaponName( "Якорь" );

	arrWeapon[9].set_idWeapon(9);
	arrWeapon[9].set_procentDamage(10);
	arrWeapon[9].set_weaponName( "Фонарный столб" );
}


const CharacterWeapon& massiveWeapon::funcReturnWeapon(short idWeapon)
{
	return arrWeapon[idWeapon];
}