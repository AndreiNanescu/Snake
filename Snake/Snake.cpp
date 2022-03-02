#include "Snake.h"
const int mapHeight{ 25 }, mapWidth{ 34 };
snake::snake()
{
	head.x = mapWidth / 2;
	head.y = mapHeight / 2;
	score = 0;
}

void snake::movement(char input)
{
	switch (input)
	{
	case 'w':
	case 'W':
		head.y++;
		break;
	case 's':
	case 'S':
		head.y--;
		break;
	case 'a':
	case 'A':
		head.x--;
		break;
	case 'd':
	case 'D':
		head.x++;
		break;
	default: //nothing
		break;
	}


}