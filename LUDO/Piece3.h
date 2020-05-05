#pragma once
#include "Piece.h"
class Piece3: public Piece

{
	Piece3();
	bool otherPiecePresent(int);
	bool isKilling(int);
	bool isKilled();
	bool isHomed(int);
	void bringOut(int);

};

