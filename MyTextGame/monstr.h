#pragma once
#include "dealingDamage.h"
class Monstr
{
	short maxHillPoints = 0;
	short monstrPrice = 0;
	short basicMonstrStat = 0;

public:

	short get_maxHillPoints() const;
	void set_maxHillPoints(short);
	short get_monstrPrice() const;
	void set_monstrPrice(short);
	short get_basicMonstrStat() const;
	void set_basicMonstrStat(short);



	short monstrDamage() const;

};