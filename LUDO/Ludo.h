#include<iostream>
#include<vector>
#include "Position.h"
using namespace std;
class Piece;
class Player;
class Box;
#pragma once
class Ludo
{
	vector<Player*>Players;
	int Plyturn;
	int Ver;
	vector <int> DiceRolls;
	vector <Piece*> Pieces; // I am not sure about this.....
	vector<Player*>PlayersWon;
	vector<Position>Stops;
	vector<Box*>Boxes;
	Position S, E;
public:
	void Play();
	int Version();
	void ChangeTurn();
	void PrintTurnMsg();
	void Rolldice();
	void SelectPiece();
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
