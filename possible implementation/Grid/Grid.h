#pragma once

#ifndef GRID_H
#define GTID_H

#include "SFML/Graphics.hpp"
#include "../generalDef.h"
#include "../Player/PlayerManager.h"
#include "Tile.h"
#include <array>
#include <iostream>

// heros headers
#include "../Heros/Hero.h"
#include "../Heros/AlphaMan.h"
#include "../Heros/Commander.h"
#include "../Heros/DrMarry.h"
#include "../Heros/Giant.h"
#include "../Heros/Kratos.h"
#include "../Heros/Leon.h"
#include "../Heros/MrsGhost.h"
#include "../Heros/Professor.h"
#include "../Heros/RickKhonsari.h"
#include "../Heros/ROBI.h"
#include "../Heros/Sniper.h"
#include "../Heros/Sybil.h"

class Grid
{
public:
	Grid();

	// fill the grid by tiles
	void fillTheGrid();
	void setTilesPosition();

	// draw
	void draw(sf::RenderWindow*);

	// click on tiles
	void SelectionClicked(const sf::Vector2i&, PlayerManager&, heros&);		// heroSelectionMenu version
	void battlefieldClicked(const sf::Vector2i&, PlayerManager&, heros);	// it's not supposed to be an overLoaded version

	// set or remove this tile
	void clearAllTiles();
	void clearTileAndHero(Tile*&, PlayerManager&);
	void setThePlayerHerosVec(PlayerManager&, heros&,const sf::Vector2i&);

	// sfml 
	sf::Sprite getGridSpr();
	void setFillColor(const sf::Color&);
	void setPosition(const sf::Vector2f&);
	void setScale(const sf::Vector2f&);
	sf::FloatRect getGlobalBound();
	const sf::Vector2f& getOrigin();
	const sf::Vector2f& getPosition();
	const sf::Vector2f& getScale();
	const sf::Color& getColor();


private:
	// utility functions
	void setTilesScale(const sf::Vector2f&);

	sf::Texture gridTex;
	sf::Sprite gridSpr;
	std::array<std::array<Tile*, 9>, 9> tiles;

};


#endif