#include<iostream>
#include<vector>
using namespace std;

class Player;
class Position;
class Box;

#pragma once
class Ludo
{
	vector<Player*>Players;
	int Plyturn;
	vector <int>DiceRolls;
	vector<Player*>PlayersWon;
	vector<Position>Stops;
	vector<Box*>Boxes;

};

