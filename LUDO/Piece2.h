#pragma once
#include "Piece.h"

class Piece2: public Piece
{
	Piece2();
	bool otherPiecePresent(int);
	bool isKilling(int);
	bool isKilled();
	bool isHomed(int);
	void bringOut(int);
};

