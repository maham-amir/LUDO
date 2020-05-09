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
	cin >> S.BN;
}
bool Ludo::IsValidSelection()
{
	if (Boxes[S.BN] != nullptr && Boxes[S.BN] -> GetColor == Boxes[S.BN] ->Pieces[Plyturn]->color)
		return true;
	else
		return false;
}
bool Ludo::IsValidDestination()
{
	if (E.BN - S.BN == (DiceRolls - 1 ) && Boxes[E.BN]->GetColor() != Boxes[S.BN]->Pieces[Plyturn]->color)
		return true;
	else
		return false;
}

bool Ludo::IsVacantSpot()
{
	if (Boxes[E.BN] == nullptr)
		return true;
	else
		return false;
}
void Ludo::RemovePlayer()
{
	vector <Player*> P;
	for (int i = 0; i < Plyturn; i++)
		P[i] = Players[i];
	for (int i = Plyturn; i < sizeof(Players); i++)
		P[i] = Players[i + 1];
	for (int i = 0; i < sizeof(P); i++)
		Players[i] = P[i];
	Players[Plyturn].erase(Players.begin() + Plyturn);
}
Piece* Ludo::getSelectedPiece()
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
