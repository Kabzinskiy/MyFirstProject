#pragma once
#include "weapon.h"
#include <string>

class massiveWeapon
{
	weapon arrWeapon[10];
public:
	massiveWeapon();
	const weapon& funcReturnWeapon( short idWeapon );
};

