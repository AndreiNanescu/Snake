#include <iostream>
const int mapHeight{ 25 }, mapWidth{ 34 };

void drawMap(char map[mapHeight][mapWidth])
{
	for (int i = 0; i < mapHeight; i++)
		for (int j = 0; j < mapWidth; j++)
			if ((i == 0) || (j == 0) || (i == mapHeight - 1) || (j == mapWidth - 1))
				map[i][j] = '#';
			else
				map[i][j] = ' ';
}

void printMap(char map[mapHeight][mapWidth])
{
	for (int i = 0; i < mapHeight; i++)
	{
		for (int j = 0; j < mapWidth; j++)
			std::cout << map[i][j] << " ";
		std::cout << std::endl;
	}
}

int main()
{
	char map[mapHeight][mapWidth];
	drawMap(map);
	printMap(map);
}
