#include "Position.h"
#include<iostream>
using namespace std;

class Piece;

#pragma once
class Box
{
	Position position;
	vector<Piece*>Pieces;

public:
	Box();
};

