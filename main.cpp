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
			function.display();//For displaying the Tic Toc Toe board 
			function.choose();//For Selecting the numbers in the board
			i = function.check();// Checking the marks in Horizontally, Vertically, Diagonally  
		} while (i == -1 );

		function.display();
		function.result(i);//Win or Draw

		std::cout << "Press 'n' to quit the game, Enter any key to start the game. " << std::endl;
		std::cin >> x;
		if(x == 'n' || x == 'N')
		{ 
			break;
		}

		function.reset();
	}
	
	std::cout << "Quitting..." << std::endl;

	return 0;
}
