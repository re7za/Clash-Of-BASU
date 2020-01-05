#pragma once
#include "Menu.h"

menuType Menu::getMenuName()
{
	return menuName;
}
menuType Menu::getPreviousMenu()
{
	return previousMenu;
}
void Menu::setGamelabel()
{
	gameLabelFont.loadFromFile("Font/fighting spirit TBS_bold.ttf");
	gamelabel.setFont(gameLabelFont);
	gamelabel.setString("    Clash Of\nBASU");
	gamelabel.setFillColor(sf::Color(255, 255, 255, 220));
	gamelabel.setCharacterSize(100);
}