#include<iostream>
#include<vector>
using namespace std;

class Player;
class Position;
class Box;
class Piece;

#pragma once
class Ludo
{
	vector<Player*>Players;
	int Plyturn;
	vector <int>DiceRolls;
	vector<Player*>PlayersWon;
	vector<Position>Stops;
	vector<Box*>Boxes;
public:
	void ChangeTurn();
	void PrintTurnMsg();
	void Rolldice();
	bool IsValidSelection();
	bool IsValidDestination();
	bool IsVacantSpot();
	void RemovePlayer();
	Piece getSelectedPiece();
	void play();
  	//code by BSCS19065
	bool iskill();
	void init(int);
	void Update();
	void Highlight();
	void UnHighlight();
	void DisplayBoard();
	void AddWinnerToList(Player*);
	// end code by BSCS19065
};
