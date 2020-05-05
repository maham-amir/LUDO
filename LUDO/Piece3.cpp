#include "Piece3.h"
#include "Piece.h"

Piece3::Piece3() :Piece()
{}

bool Piece3::otherPiecePresent(int rNum)
{
	return true;
}

bool Piece3::isKilling(int rNum)//rNum=the rolled number
{
	//if another piece is present on the destination of *this piece, otherPiecePresent returns true
	//if the user selects this piece, the killed piece is removed from the board and returned to its home(isOut false again)
	return true;
}

bool Piece3::isKilled()
{
	//if another piece occupies the same position, this piece is returned to its home(isOut false)
	return true;
}

bool Piece3::isHomed(int rNum)
{
	//calculates the destination using the rolled number..
	//if the piece is selected, it is homed and removed from the board
	//the array of pieces of this player is reduced by one
	return true;
}

void Piece3::bringOut(int rNum)
{
	//show the piece at box 1 if rNum is 6

}

