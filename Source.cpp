#include"Header.h"
#include<iostream>

functions::functions() {
	square = { '0','1','2','3','4','5','6','7','8' };
	Player = 1;
	//x = 1;
}


void functions::display() {// for displaying the tictoktoe board 

	system("cls");

	std::cout << "\n\n\n\t\t\t\t Tic tok toe " << std::endl;
	std::cout << "\t\t\t\t-------------" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\t\t\t\t  " << square[0] << " | " << square[1] << " | " << square[2] << std::endl;
	std::cout << "\t\t\t\t----+---+----" << std::endl;
	std::cout << "\t\t\t\t  " << square[3] << " | " << square[4] << " | " << square[5] << std::endl;
	std::cout << "\t\t\t\t----+---+----" << std::endl;
	std::cout << "\t\t\t\t  " << square[6] << " | " << square[7] << " | " << square[8] << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\t\t Player-1 select's X  ; Player-2 select's O as Marks" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

int functions::choose() {// for selecting the mark positions through numbers

	Player = (Player % 2) ? 1 : 2;
	std::cout << "Player: " << Player << " Select a number from the display and enter: ";
	std::cin >> choice;
	mark = (Player == 1) ? 'X' : 'O';

	switch (choice)
	{
	case 0:
		square[0] = mark;
		break;
	case 1:
		square[1] = mark;
		break;
	case 2:
		square[2] = mark;
		break;
	case 3:
		square[3] = mark;
		break;
	case 4:
		square[4] = mark;
		break;
	case 5:
		square[5] = mark;
		break;
	case 6:
		square[6] = mark;
		break;
	case 7:
		square[7] = mark;
		break;
	case 8:
		square[8] = mark;
		break;
	default:
		std::cout << "Invalid number entered";
		Player--;
		std::cin.ignore();
		std::cin.get();
		break;
	}
	return mark;
}

int functions::check() {// for checking the marks

	if (square[0] == square[1] && square[1] == square[2]) // is 1st row equal
		return 1;

	else if (square[3] == square[4] && square[4] == square[5]) // is 2nd row equal
		return 1;

	else if (square[6] == square[7] && square[7] == square[8]) // is 3rd row equal
		return 1;

	else if (square[0] == square[3] && square[3] == square[6]) // is 1st column equal
		return 1;

	else if (square[1] == square[4] && square[4] == square[7]) // is 2nd column equal
		return 1;

	else if (square[2] == square[5] && square[5] == square[8]) // is 3rd column equal
		return 1;

	else if (square[0] == square[4] && square[4] == square[8]) // is diagonally equal
		return 1;

	else if (square[2] == square[4] && square[4] == square[6]) // is diagonall equal 
		return 1;

	else if (square[0] != '0' && square[1] != '1' && square[2] != '2' && square[3] != '3' // if all index's filled with not equal marks 
		&& square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8')
		return 0;

	else
		Player++;
	return -1;

}

int functions::result(int i) {// win or draw
	if (i == 1)
	{
		std::cout << "\t\tPlayer-" << Player << " win ";
		std::cout << std::endl;
		std::cout << std::endl;
	}
	else
	std::cout << "\t\tGame Draw";
	std::cout << std::endl;
	std::cout << std::endl;
	return i;
}
