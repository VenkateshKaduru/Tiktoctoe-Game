#include"Tictoktoe.h"
#include<iostream>

Tictoktoe::Tictoktoe() {
	reset();
}

void Tictoktoe::reset() {

	m_square = { '0','1','2','3','4','5','6','7','8' };
	m_player = 1;
}
void Tictoktoe::display() {// for displaying the tictoktoe board 

	system("cls");

	std::cout << "\n\n\n\t\t\t\t Tic tok toe " << std::endl;
	std::cout << "\t\t\t\t-------------" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\t\t\t\t  " << m_square[0] << " | " << m_square[1] << " | " << m_square[2] << std::endl;
	std::cout << "\t\t\t\t----+---+----" << std::endl;
	std::cout << "\t\t\t\t  " << m_square[3] << " | " << m_square[4] << " | " << m_square[5] << std::endl;
	std::cout << "\t\t\t\t----+---+----" << std::endl;
	std::cout << "\t\t\t\t  " << m_square[6] << " | " << m_square[7] << " | " << m_square[8] << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\t\t Player-1 select's X  ; Player-2 select's O as Marks" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

int Tictoktoe::choose() {// for selecting the mark positions through numbers

	m_player = (m_player % 2) ? 1 : 2;
	std::cout << "Player: " << m_player << " Select a number from the display and enter: ";
	std::cin >> m_choice;
	m_mark = (m_player == 1) ? 'X' : 'O';

	switch (m_choice)
	{
	case 0:
		m_square[0] = m_mark;
		break;
	case 1:
		m_square[1] = m_mark;
		break;
	case 2:
		m_square[2] = m_mark;
		break;
	case 3:
		m_square[3] = m_mark;
		break;
	case 4:
		m_square[4] = m_mark;
		break;
	case 5:
		m_square[5] = m_mark;
		break;
	case 6:
		m_square[6] = m_mark;
		break;
	case 7:
		m_square[7] = m_mark;
		break;
	case 8:
		m_square[8] = m_mark;
		break;
	default:
		std::cout << "Invalid number entered";
		m_player--;
		std::cin.ignore();
		std::cin.get();
		break;
	}
	return m_mark;
}

int Tictoktoe::check() {// for checking the marks

	if (m_square[0] == m_square[1] && m_square[1] == m_square[2]) // is 1st row equal
		return 1;

	else if (m_square[3] == m_square[4] && m_square[4] == m_square[5]) // is 2nd row equal
		return 1;

	else if (m_square[6] == m_square[7] && m_square[7] == m_square[8]) // is 3rd row equal
		return 1;

	else if (m_square[0] == m_square[3] && m_square[3] == m_square[6]) // is 1st column equal
		return 1;

	else if (m_square[1] == m_square[4] && m_square[4] == m_square[7]) // is 2nd column equal
		return 1;

	else if (m_square[2] == m_square[5] && m_square[5] == m_square[8]) // is 3rd column equal
		return 1;

	else if (m_square[0] == m_square[4] && m_square[4] == m_square[8]) // is diagonally equal
		return 1;

	else if (m_square[2] == m_square[4] && m_square[4] == m_square[6]) // is diagonall equal 
		return 1;

	else if (m_square[0] != '0' && m_square[1] != '1' && m_square[2] != '2' && m_square[3] != '3' // if all index's filled with not equal marks 
		&& m_square[4] != '4' && m_square[5] != '5' && m_square[6] != '6' && m_square[7] != '7' && m_square[8] != '8')
		return 0;

	else
		m_player++;
	return -1;

}

void Tictoktoe::result(int i) {// win or draw
	if (i == 1)
	{
		std::cout << "\t\tPlayer-" << m_player << " win ";
		std::cout << std::endl;
		std::cout << std::endl;
	}
	else
	std::cout << "\t\tGame Draw";
	std::cout << std::endl;
	std::cout << std::endl;
}
