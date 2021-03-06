#pragma once

//Kratos header

#ifndef KRATOS_H
#define KRATOS_H

#include "Hero.h"

class Kratos : public Hero
{
public:
	Kratos(const sf::Vector2i&);
	void attack(Hero* attackedHero, std::vector<Hero*>& attackedHeroesVec);

	void AvatarMode(Hero*, sf::Vector2i);

private:

};


#endif // !Kratos
