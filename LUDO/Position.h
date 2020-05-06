#pragma once
#include "Player.h"
struct Position
{
	int BN;
public:
	Position(int bn = 0);
	int GetColor()
	{
		return c;
	}
	~Position();
};
