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
	Piece();
};

