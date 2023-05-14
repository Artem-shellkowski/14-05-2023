
#pragma once
#include "SFML/Graphics.hpp"

const float WINDOW_WIDTH{ 800.f };
const float WINDOW_HEIGHT{ 800.f };
const std::string WINDOW_TITLE{ "SFML SPACE SHOOTER " };
const size_t FPS{ 60 };

const std::string IMAGES_FOLDER{ "images\\" };
const std::string PLAYER_FILE_NAME{ "playerShip3_orange.png" };
const sf::Vector2f PLAYER_START_POS{ WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2 };
const int METEORS_QTY{ 20 };
const sf::Vector2f GAMEOVER_START_POS{ WINDOW_WIDTH * 2, WINDOW_HEIGHT * 2 };
const std::string GAMEOVER_FILE_NAME{ "gameover.png" };

const std::string LASER_FILE_NAME{ "laserBlue12.png" };
const float LASER_SPEED = -15.f;
const int FIRE_COOLDOWN = 200;

const std::string FONT_FILE_NAME = "Samson.ttf";
const int FONT_SIZE = 32;


const std::string MULTI_LASER_BONUS_FILE_NAME{ "things_gold.png" };
const float BONUS_SPEED{ 15.f };

const std::string HP_BONUS_FILE_NAME{ "pill_yellow.png" };
const size_t HP_BONUS_MEDICINE = 30;
const std::string SHIELD_BONUS_FILE_NAME{ "shield_gold.png" };
const std::string SHIELD_FILE_NAME{ "shield1.png" };


const int METEOR_TYPES_QTY = 8;
const size_t METEOR_QTY = 20;


const float PLAYER_SPEED = 10.f;
const int INITIAL_PLAYER_HP = 100;
const int FIRE_COOLDOWN = 200;


const std::string RES_FOLDER = "res\\";

const int BONUS_RANGE = 10000;
const int BONUS_CHANCE = 500;

const std::string MULTI_LASER_BONUS_FILE_NAME = "things_gold.png";

const size_t CHAR_SIZE = 32;