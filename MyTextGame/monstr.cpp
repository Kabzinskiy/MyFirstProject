#include "monstr.h"




short Monstr::get_maxHillPoints() const
{
	return this->maxHillPoints;
}

short Monstr::get_monstrPrice() const
{
	return this->monstrPrice;
}

short Monstr::get_basicMonstrStat() const
{
	return this->basicMonstrStat;
}



void Monstr::set_maxHillPoints(short maxPoints)
{
	this->maxHillPoints = maxPoints;
}

void Monstr::set_monstrPrice(short price)
{
	this->monstrPrice = price;
}

void Monstr::set_basicMonstrStat(short newMonstrstat)
{
	this->basicMonstrStat = newMonstrstat;
}



short Monstr::monstrDamage() const
{
	return dealingDamage(basicMonstrStat, 1);
}