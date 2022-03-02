#include "Snake.h"
const int mapHeight{ 25 }, mapWidth{ 34 };
snake::snake()
{
	head.x = mapWidth / 2;
	head.y = mapHeight / 2;
	for (int i = 0; i < bodyLength; i++)
	{
		body[i].x = head.x;
		body[i].y = head.y - (i + 1);
	}
}

void snake::movement(char input)
{
	switch (input)
	{
	case 'w':
	case 'W':
		head.y++;
		for (int i = 0; i < bodyLength; i++)
			body[i].y++;
		break;
	case 's':
	case 'S':
		head.y--;
		for (int i = 0; i < bodyLength; i++)
			body[i].y--;
		break;
	case 'a':
	case 'A':
		head.x--;
		for (int i = 0; i < bodyLength; i++)
			body[i].x--;
		break;
	case 'd':
	case 'D':
		head.x++;
		for (int i = 0; i < bodyLength; i++)
			body[i].x++;
		break;
	default: //nothing
		break;
	}
}