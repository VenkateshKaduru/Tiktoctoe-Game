// tictoktoeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include"Tictoktoe.h"

int main()
{
	int i;
	Tictoktoe function;
	char x;	

	while(true){
		do{
			function.displayTictoktoeBoard();
			function.selectPlayerNumerandMark();
			i = function.checkRowsandColoums();
		} while (i == -1 );

		function.displayTictoktoeBoard();
		function.resultWinorDraw(i);

		std::cout << "Press 'n' to quit the game, Enter any key to start the game. " << std::endl;
		std::cin >> x;
		if(x == 'n' || x == 'N')
		{ 
			break;
		}

		function.restartGame();
	}
	
	std::cout << "Quitting..." << std::endl;

	return 0;
}
