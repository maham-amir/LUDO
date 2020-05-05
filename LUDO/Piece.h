#pragma once
class Piece
{
protected:
	int position; //contains box num
	bool hasKilled;
	bool hasHomed;
	bool isOut;
	bool isSafe;

public:
	friend class Ludo;
	Piece();
	void bringOut();
	virtual void draw()=0; //used to print at position
	virtual void undraw() = 0; // undraws at position
};

