#pragma once
#include "dealingDamage.h"

short dealingDamage (short baseParameter = 1, short weaponProperies = 0)
{
	
	return (baseParameter + rand() % baseParameter) + (baseParameter * weaponProperies);
}
