#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"


class Cactus {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	static std::string barrier_file_names[];
	
public:
	Cactus();
	void update();
	void spawn();
	void draw(sf::RenderWindow&);
	sf::FloatRect getHitBox();
	sf::Vector2f getPosition();
	sf::Sprite getSprite();
	
};
