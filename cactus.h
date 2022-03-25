#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
#include "game.h"

class Cactus {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	size_t score;
public:
	Cactus(float x, float y) {
		texture.loadFromFile(IMAGES_FOLDER+CACTUS_FILE_NAME);
		sprite.setTexture(texture);
		sprite.setScale(0.92f, 0.853f);
		sprite.setPosition(x, y);
		score = 0;
	}
	sf::Sprite getSprite() { return sprite; }
	sf::FloatRect getHitBox() { return sprite.getGlobalBounds(); }
	void update() {
		sf::Vector2f speed = sf::Vector2f(-5.f, 0.f);
		sprite.move(speed);

		if (sprite.getPosition().x <= -WINDOW_WIDTH) {
			score++;
			size_t line = rand() % 3;
			sprite.setPosition(+WINDOW_WIDTH, 0.f);
		}
	}
	size_t getScore() { return score; }
};