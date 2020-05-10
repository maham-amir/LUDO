#include "Ludo.h"
#include "Piece.h"
#include "Player.h"
#include"Box.h"
int Ludo::getVersion()
{
	return Ver;
}
void Ludo::setVersion(int v)
{
  Ver = v;
}
void Ludo::ChangeTurn()
{
	if (Plyturn < Ver - 1)
		Plyturn++;
	else
		Plyturn = 0;
}
void Ludo::PrintTurnMsg()
{
	cout << "Player " << Players[Plyturn] << " Turn";
}
void Ludo::Rolldice()
{
	int D;
	D = (rand() % 6);
	DiceRolls.push_back (D + 1);
}
void Ludo::SelectPiece()
{
	cin >> S.boxnum;
}
bool Ludo::IsValidSelection()
{
	if (Boxes[S.boxnum]->Pieces.size() == 0)
		return false;

	int nop = Boxes[S.boxnum]->Pieces.size();

	for (int i = 0; i < nop; i++)
	{
		if (Boxes[S.boxnum]->Pieces[i]->color == Players[Plyturn]->color)
			return true;
	}

}
bool Ludo::IsValidDestination()
{
	return true;
}

bool Ludo::IsVacantSpot()
{
	if (Boxes[E.boxnum]->Pieces.size() == 0)
		return true;
	else
		return false;
}
void Ludo::RemovePlayer()
{	
	Players.erase(Players.begin() + Plyturn);
}
Piece* Ludo::getSelectedPiece(int bn)
{
	return Players[Plyturn]->Pieces[0];
}

bool Ludo::iskill()
{
	//assuming B is array of boxes.
	return false;
}
void Ludo::init(int NOP)
{

	COLOUR c[] = { blue,red,green,yellow,purple,orange };
	int pos[] = { 9,22,9 + 3 * 2,9 + 13 * 3,9 + 13 * 4,9 + 13 * 5,9 + 13 * 6 };

	if (NOP != 2)
		for (int i = 0; i < NOP; i++)
		{
			Player* ptr = new Player(c[i], pos[i]);
			Players.push_back(ptr);
		}
	else if (NOP == 2)
	{
		Player* ptr = new Player(c[0], pos[0]);
		Players.push_back(ptr);
		Player* ptr = new Player(c[2], pos[2]);
		Players.push_back(ptr);
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
		// CalculateMove(); //gets dice rolls
		int c = 0;
		do
		{
			int bn;
			do
			{
				//get box number
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
			AddWinnerToList(Players[Plyturn]);
			RemovePlayer();
		}

		ChangeTurn();

	} while (Players.size() > 1);
}
