#include "Ludo.h"
#include "Piece.h"
void Ludo::ChangeTurn()
{
	for (int i = 0; i < sizeof(Players); i++)
	{
		if (i == Plyturn)
		{
			Plyturn = i + 1;
			return;
		}
		else
			continue;
	}
}
void Ludo::PrintTurnMsg()
{
	cout << "Player " << Players[Plyturn] << " Turn";
}
void Ludo::Rolldice()
{
	int D;
	D = (rand() % 6);
	DiceRolls = D + 1;
}
void Ludo::SelectPiece()
{
	cin >> S.r >> S.c;
}
void Ludo::SelectDestination()
{
	cin >> E.r >> E.c;
}
bool Ludo::IsValidSelection()
{
	if (B[S.r][S.c] != nullptr && B[S.r][S.c]->GetNum() == Plyturn)
		return true;
	else
		return false;
}
bool Ludo::IsValidDestination()
{
	if ((E.r - S.r == (DiceRolls -1) || E.c - S.c == (DiceRolls - 1)) && B[E.r][E.c]->GetNum() != Plyturn)
		return true;
	else
		return false;
}

bool Ludo::IsVacantSpot()
{
	if (B[E.r][E.c] == nullptr)
		return true;
	else
		return false;
}
void Ludo::RemovePlayer()
{
	vector <Player*> P;
	for (int i = 0; i < Plyturn; i++)
		P[i] = Players[i];
	for (int i = Plyturn; i < sizeof(Players) ; i++)
		P[i] = Players[i+1];
	for (int i = 0; i < sizeof(P); i++)
		Players[i] = P[i];
	delete Players[sizeof(P)];
}
//Code by BSCS19065
bool Ludo::iskill()
{
	return false;
}
void Ludo::init(int NOP)
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
	DisplayBoard();
	do
	{
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

