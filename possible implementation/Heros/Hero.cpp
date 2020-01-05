//Hero source

#include "Hero.h"


Hero::~Hero() {}

const us Hero::getId()
{
	return this->heroId;
}
const us Hero::getDamage()
{
	return this->damage;
}

void Hero::decreaseHealth(us damage)
{
	if (this->health <= maxHealth)
	{
		this->health -= damage;
		checkAliveness();
	}
}
us Hero::getHealth()
{
	return this->health;
}

void Hero::checkAliveness()
{
	if (this->health == 0 || this->health > maxHealth
		|| this->aliveness == false)
	{
		this->health = 0;
		this->aliveness = false;
		this->hiding = false;	//its not hidden anymore
		this->readiness = false;
	}
}
void Hero::setAliveness(bool newAliveness)
{
	this->aliveness = newAliveness;
	checkAliveness();
}
bool Hero::isAlive()
{
	return this->aliveness;
}

void Hero::setHiding(bool newHidingSituation)
{
	this->hiding = newHidingSituation;
}
bool Hero::isHidden()
{
	return this->hiding;
}

void Hero::setReadiness(bool newReadiness)
{
	this->readiness = newReadiness;
}
bool Hero::isReady()
{
	return this->readiness;
}

