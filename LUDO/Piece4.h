#pragma once
class Piece4:public Piece
{
	Piece4();
	bool otherPiecePresent(int);
	bool isKilling(int);
	bool isKilled();
	bool isHomed(int);
	void bringOut(int);
};

