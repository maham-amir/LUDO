#pragma once
#include "Piece.h"

class Piece2: public Piece
{
public:
	friend class Ludo;
	Piece2();
	void draw();
	void undraw();
};

