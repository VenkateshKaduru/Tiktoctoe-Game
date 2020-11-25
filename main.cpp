// tictoktoeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>

#include"Header.h"

int main()
{
Start: int i;
	Functions function;
	do {
		function.display();//For displaying the Tic Toc Toe board 
		function.choose();//For Selecting the numbers in the board
		i = function.check();// Checking the marks in Horizontally, Vertically, Diagonally  
	} while (i == -1 );
	function.display();
	function.result(i);//Win or Draw

	{
		std::cout << "Do You want to play again: y / n " << std::endl;
		char x;
		std::cin >> x;
		if (x == 'y') {
			goto Start;
		}
		if (x == 'n')
		{
			std::cout << "Quitting..." << std::endl;
		}
	}
return 0;

}
