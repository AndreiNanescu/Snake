#include <iostream>
#include <conio.h>
#include "gameMap.h"
#include "Snake.h"


int main()
{
	gameMap map;
	snake s1;
	char input = _getch();
	s1.movement(input);
	std::cout << map;
	return 0;
}