#pragma once
#include "Piece.h"
class Piece3: public Piece
{
public:
	friend class Ludo;
	Piece3();
	void draw();
	void undraw();

};

