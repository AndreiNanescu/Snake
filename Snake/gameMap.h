#pragma once
#include <iostream>
const int mapHeight{ 25 }, mapWidth{ 34 };
class gameMap
{
private:
	char map[mapHeight][mapWidth];
public:
	gameMap();
	friend std::ostream& operator<<(std::ostream& os, const gameMap& map);
};

