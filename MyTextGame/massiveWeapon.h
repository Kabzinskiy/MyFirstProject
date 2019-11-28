#pragma once
#include "characterWeapon.h"
#include <string>

class massiveWeapon
{
	CharacterWeapon arrWeapon[10];
public:
	massiveWeapon();
	const CharacterWeapon& funcReturnWeapon( short idWeapon );
};

