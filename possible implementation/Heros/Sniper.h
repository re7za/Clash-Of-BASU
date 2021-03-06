#pragma once

//Sniper header

#ifndef SNIPER_H
#define SNIPER_H

#include "Hero.h"

class Sniper : public Hero
{
public:
	Sniper(const sf::Vector2i&);
	void attack(Hero* attackedHero, std::vector<Hero*>& attackedHeroesVec);

	us getFatalHit();

private:
	us fatalHit = 1;		// sniper special power

};


#endif // !Sniper
