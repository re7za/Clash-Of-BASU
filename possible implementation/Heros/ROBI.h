#pragma once

//ROBI header

#ifndef ROBI_H
#define ROBI_H

#include "Hero.h"

class ROBI : public Hero
{
public:
	ROBI(const sf::Vector2i&);
	void attack();
	const us getId();
	const us getDamage();

private:

};


#endif // !ROBI_H
