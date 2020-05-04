#pragma once
class Piece
{
protected:
	int pos;
	bool hasKilled;
	bool hasHomed;
	bool isOut;
	//bool isPaired;
	bool isSafe;
	bool isSelected;
	//bool isKilled;
public:
	Piece() :hasKilled(false), hasHomed(false), isOut(false), isSafe(true), pos(0), isSelected(false) {}//0 means the piece is not out yet

};

