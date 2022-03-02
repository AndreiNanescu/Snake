#pragma once
const int bodyLength{ 5 };
struct position
{
	int x,y;
};

class snake
{
private:
	position head, body[bodyLength];
public:
	snake();
	void movement(char); 
	int getHeadXPos(int);
	int getHeadYPos(int);
};

