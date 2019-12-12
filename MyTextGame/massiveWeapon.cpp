#include "massiveWeapon.h"


massiveWeapon::massiveWeapon()
{
	arrWeapon[0].set_idWeapon(0);
	arrWeapon[0].set_percentDamage(1);
	arrWeapon[0].set_weaponName( "Twig" );

	arrWeapon[1].set_idWeapon(1);
	arrWeapon[1].set_percentDamage(2);
	arrWeapon[1].set_weaponName( "Heavy twig" );

	arrWeapon[2].set_idWeapon(2);
	arrWeapon[2].set_percentDamage(3);
	arrWeapon[2].set_weaponName( "Stick" );

	arrWeapon[3].set_idWeapon(3);
	arrWeapon[3].set_percentDamage(4);
	arrWeapon[3].set_weaponName( "Old man's cane" );

	arrWeapon[4].set_idWeapon(4);
	arrWeapon[4].set_percentDamage(5);
	arrWeapon[4].set_weaponName( "Crutch");

	arrWeapon[5].set_idWeapon(5);
	arrWeapon[5].set_percentDamage(6);
	arrWeapon[5].set_weaponName("Cornice");

	arrWeapon[6].set_idWeapon(6);
	arrWeapon[6].set_percentDamage(7);
	arrWeapon[6].set_weaponName( "Small tree" );

	arrWeapon[7].set_idWeapon(7);
	arrWeapon[7].set_percentDamage(8);
	arrWeapon[7].set_weaponName( "Medium tree" );

	arrWeapon[8].set_idWeapon(8);
	arrWeapon[8].set_percentDamage(9);
	arrWeapon[8].set_weaponName( "Anchor" );

	arrWeapon[9].set_idWeapon(9);
	arrWeapon[9].set_percentDamage(10);
	arrWeapon[9].set_weaponName( "Lamp post" );
}


const weapon& massiveWeapon::funcReturnWeapon(short idWeapon)
{
	return arrWeapon[idWeapon];
}