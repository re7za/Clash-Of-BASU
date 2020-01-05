#pragma once

//DrMarry header

#ifndef DRMARRY_H
#define DRMARRY_H

#include "Hero.h"

class DrMarry : public Hero
{
public:
	DrMarry();
	void attack();
	const us getId();
	const us getDamage();

private:
	const us heroId = drMarry;
	const us damage = 2;

};


#endif // !DrMarry