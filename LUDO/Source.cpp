#include<iostream>
#include<conio.h>
#include "Ludo.h"
#include "Grid.h"
using namespace std;

int main1()
{
	/*Ludo L;
	L.play();*/


	return _getch();
}
int main()
{
	initwindow(Max_Cols, Max_Rows);
	int CA[] = { Magenta, LitMagenta, White, Red, LitRed, White, Green, LitGreen, White, Cyan, LitCyan, White };

	Grid Ludo(4, Max_Rows, Max_Cols, CA, 0);
	Ludo.PrintGrid();
	int x = 0, y = 0;
	while (true)
	{
		Ludo.IsBox(x, y);
	}
	system("pause");
	return 0;
}