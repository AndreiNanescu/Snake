#include "gameMap.h"
#include <iostream>
gameMap::gameMap()
{
	for (int i = 0; i < mapHeight; i++)
		for (int j = 0; j < mapWidth; j++)
			if ((i == 0) || (j == 0) || (i == mapHeight - 1) || (j == mapWidth - 1))
				map[i][j] = '#';
			else
				map[i][j] = ' ';
}
std::ostream& operator<<(std::ostream& os, const gameMap& gameMap)
{
	for (int i = 0; i < mapHeight; i++)
	{
		for (int j = 0; j < mapWidth; j++)
			os << gameMap.map[i][j] << " ";
		os << std::endl;
	}
	return os;
}
void gameMap::updateMap(int xPos,int yPos)
{
	map[xPos][yPos] = 'x';
}