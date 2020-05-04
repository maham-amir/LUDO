#include<iostream>
#include<vector>
#include "Position.h"
using namespace std;

class Player;
class Box;
class Board;
#pragma once
class Ludo
{
	vector<Player*>Players;
	int Plyturn;
	int DiceRolls;
	vector<Player*>PlayersWon;
	vector<Position>Stops;
	vector<Box*>Boxes;
	vector<Board**>B;
	Position S, E;
public:
	void ChangeTurn();
	void PrintTurnMsg();
	void Rolldice();
	void SelectPiece();
	void SelectDestination();
	bool IsValidSelection();
	bool IsValidDestination();
	bool IsVacantSpot();
	void RemovePlayer();
  	//code by BSCS19065
	bool iskill();
	void init(int);
	void Update();
	void Highlight();
	void UnHighlight();
	void DisplayBoard();
	void AddWinnerToList();
	// end code by BSCS19065
};
