#pragma once

#include "Sprite.h"
class Player : public Sprite
{
	double limitDown=-0.75, limitUp=0.5;
	int score;
public:
	Player();
	~Player();
	void setcoord(int q, int w);
	void setlimit(int q, int w);
	void moveUp();
	void moveDown();
	void moveRight();
	void moveLeft();
	bool movegeneral(int x1, int y1);
	int getScore();
	void addScore();
	void setScore(int pScore);
};

