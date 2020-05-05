#include "Piece.h"

Piece::Piece() :hasKilled(false), hasHomed(false), isOut(false), isSafe(true), pos(0), isSelected(false)
{}

void Piece::bringOut()
{
	isOut = true;
}

