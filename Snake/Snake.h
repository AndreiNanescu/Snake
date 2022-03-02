#pragma once
struct position
{
	int x,y;
};
class snake
{
private:
	position head, tail;
	int score;
	const int bodyLength{ 5 };
public:
	snake();
	void movement(char);
	void printSnake();
	int getHeadXPos(int);
	int getHeadYPos(int);
};

