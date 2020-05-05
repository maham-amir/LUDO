#include "Piece.h"
#include<vector>
#include<iostream>
using namespace std;

enum COLOUR{red, yellow, green, blue, orange, purple};

#pragma once
class Player
{
	vector<Piece*>Pieces;
	COLOUR color;

public:
	friend class Ludo;
	Player();
	Player(COLOUR);
	void removePiece(int);

};

