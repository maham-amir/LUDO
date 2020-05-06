#include "Piece.h"

Piece::Piece() :hasKilled(false), hasHomed(false), isOut(false), isSafe(true), position(0)
{}

void Piece::bringOut()
{
	isOut = true;
}

