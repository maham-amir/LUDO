#pragma once
#include "Piece.h";
class Piece1: public Piece
{
	Piece1();
	bool otherPiecePresent(int);
	bool isKilling(int);
	bool isKilled();
	bool isHomed(int);
	void bringOut(int);


};

