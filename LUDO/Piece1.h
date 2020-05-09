#pragma once
#include "Piece.h";
class Piece1: public Piece
{
	
public:
	friend class Ludo;
	Piece1();
	void draw();
	void undraw();
};

