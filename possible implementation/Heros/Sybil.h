#pragma once

//Sybil header

#ifndef SYBIL_H
#define SYBIL_H

#include "Hero.h"

class Sybil : public Hero
{
public:
	Sybil(const sf::Vector2i&);
	void attack();
	const us getId();
	const us getDamage();

private:

};

#endif 
