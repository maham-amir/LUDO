#include "Ludo.h"
#include "Piece.h"
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
Piece Ludo::getSelectedPiece()
{

}
//Code by BSCS19065
bool Ludo::iskill()
{
	return false;
}
void Ludo::init()
{

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
void Ludo::AddWinnerToList()
{

}
//end Code by BSCS19065
void Ludo::play()
{
	int NOP; 
	cin >> NOP;
	init(NOP);
	do
	{
		DisplayBoard();
		PrintTurnMsg();
		CalculateMove(); //gets dice rolls
		int c = 0;
		do
		{
			Piece p;
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

			Unhighlight();
			UpdateBoard();
		} while (c < DiceRolls.size());
		
		if (Players[Plyturn]->Pieces.size() == 0)
		{
			PlayersWon.push_back(Players[Plyturn]);
			Players.erase(Players.begin()+Plyturn);
		}

		ChangeTurn();

	} while (Players.size() > 1);
}

