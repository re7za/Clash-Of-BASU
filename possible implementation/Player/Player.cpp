
#include "Player.h"

Player::Player()
{

}

bool Player::isHeroExistInVec(heros heroName)
{
	for (Hero*& i : playerHerosVec)
		if (i->getId() == heroName)
			return true;
	
	return false;
}

void Player::removeHero(heros heroName)
{
	for (us i = 0; i < playerHerosVec.size(); i++)
		if (playerHerosVec.at(i)->getId() == heroName)
		{
			playerHerosVec.erase(playerHerosVec.begin() + i);
			break;
		}
	playerHerosVec.shrink_to_fit();
}
