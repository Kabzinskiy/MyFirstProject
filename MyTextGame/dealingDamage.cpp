#pragma once
#include "dealingDamage.h"

short dealingDamage (short baseParameter = 1, short weaponProperties = 0)
{
	
	return (baseParameter + rand() % baseParameter) + (baseParameter * weaponProperties);
}
