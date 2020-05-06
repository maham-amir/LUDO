#include "Ludo.h"
#include "Piece.h"
#include "Player.h"
void Ludo::ChangeTurn()
{

}
void Ludo::PrintTurnMsg()
{

}
void Ludo::Rolldice()
{

}
bool Ludo::IsValidSelection()
{
	return true;
}
bool Ludo::IsValidDestination()
{
	return true;
}
bool Ludo::IsVacantSpot()
{
	return true;
}
void Ludo::RemovePlayer()
{

}
Piece* Ludo::getSelectedPiece()
{
	return Players[Plyturn]->Pieces[0];
}

//Code by BSCS19065
bool Ludo::iskill()
{
	//assuming B is array of boxes.
	return false;
}
void Ludo::init(int NOP)
{
	//Players.resize(NOP);
	//PlayersWon.resize(NOP);
	for (int i = 0; i < NOP; i++)
	{
		Players.push_back(new Player());
	}

}
void Ludo::Update()
{

}
void Ludo::Highlight()
{

}
void Ludo::UnHighlight()
{

}
void Ludo::DisplayBoard()
{

}
void Ludo::AddWinnerToList(Player* Won)
{
	PlayersWon.push_back(Won);	
}

void Ludo::play()
{
	int NOP; 
	cin >> NOP;
	init(NOP);
	DisplayBoard();
	do
	{
		PrintTurnMsg();
		CalculateMove(); //gets dice rolls
		int c = 0;
		do
		{
			Piece* p;
			do
			{
				p = getSelectedPiece();
			} while (!IsValidSelection());

			Highlight();


			do
			{
				int boxnum;
				cin >> boxnum;
			} while (IsValidDestination());

			UnHighlight();
			Update();
		} while (c < DiceRolls.size());
		
		if (Players[Plyturn]->Pieces.size() == 0)
		{
			AddWinnerToList();
			RemovePlayer();
		}

		ChangeTurn();

	} while (Players.size() > 1);
}

