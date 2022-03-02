#include "Snake.h"
const int mapHeight{ 25 }, mapWidth{ 34 };
void copyPos(position, position);
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
		if ((head.x == body[bodyLength - 1].x) || (head.y == body[bodyLength - 1].y))
			for (int i = 0; i < bodyLength; i++)
				if (i < bodyLength - 1)
					copyPos(body[i], body[i + 1]);
				else
					copyPos(body[i], head);
		else
			head.x = body[bodyLength - 1].x;
		break;
	case 's':
	case 'S':
		head.y--;
		if ((head.x == body[bodyLength - 1].x) || (head.y == body[bodyLength - 1].y))
			for (int i = 0; i < bodyLength; i++)
				if (i < bodyLength - 1)
					copyPos(body[i], body[i + 1]);
				else
					copyPos(body[i], head);
		else
			head.x = body[bodyLength - 1].x;
		break;
	case 'a':
	case 'A':
		head.x--;
		if ((head.x == body[bodyLength - 1].x) || (head.y == body[bodyLength - 1].y))
			for (int i = 0; i < bodyLength; i++)
				if (i < bodyLength - 1)
					copyPos(body[i], body[i + 1]);
				else
					copyPos(body[i], head);
		else
			head.y = body[bodyLength - 1].y;
		break;
	case 'd':
	case 'D':
		head.x++;
		if ((head.x == body[bodyLength - 1].x) || (head.y == body[bodyLength - 1].y))
			for (int i = 0; i < bodyLength; i++)
				if (i < bodyLength - 1)
					copyPos(body[i], body[i + 1]);
				else
					copyPos(body[i], head);
		else
			head.y = body[bodyLength - 1].y;
		break;
	default: //nothing
		break;
	}
}

void copyPos(position p1, position p2)
{
	p1.x = p2.x;
	p1.y = p2.y;
}