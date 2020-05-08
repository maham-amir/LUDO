#include "Player.h"

Player::Player()
{
}

Player::Player(COLOUR c):color(c)
{
}

void Player::removePiece(int i)
{
	Pieces.erase(Pieces.begin() + i);
}