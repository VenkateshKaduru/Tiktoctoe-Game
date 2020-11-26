#ifndef TICTOKTOE_H_
#define TICTOKTOE_H_
#include<vector>

/**
* Tictoktoe class provides the actions required to play the game as functions.
**/
class Tictoktoe {

private:
/**
*Member variables.
*@m_square: Initially contains the numbers as chars, and when invoking, index's replaces with mark 'X' & 'O'.
*@m_player: represents about players.
*@m_select: player selects any number from the tictoktoe display borad.
*@m_mark: assigning mark 'X' to the player-1 and mark 'O' to player-2. 
**/
	std::vector<char> m_square;
	int m_player;
	int m_select;
	char m_mark;

public:
	/**
	* Tictoktoe();
	* Constructor to assigning values to the member variables
	**/
	Tictoktoe();

	/**
	* displayTictoktoeBoard();
	* This function displays the Tictoktoe Game board.
	* Return value: none
	**/
	void displayTictoktoeBoard();

	/**
	* selectPlayerNumerandMark();
	* This function computes player, number selection, and assigns the mark to the respected player.
	* assign the mark into the selected number [m_square index].
	* @Return: none
	**/
	void selectPlayerNumerandMark();

	/**
	* checkRowsandColoums();
	* This function checks horizontally, vertically, diagonally for same marks.
	* @Return 1: when it finds same marks in horizontally or vertically or diagonally; player win. 
	* @Return 0: when marks filled in the display borad and are not same; draw game.
	* @Return -1: when above condtions do not satisfy;  
	**/
	int checkRowsandColoums();

	/**
	* resultWinorDraw();
	* This function decides win or draw by taking the return value of check function as a input parameter to the result function. 
	* @Return none.
	**/
	void resultWinorDraw(int i);

	/**
	* restartGame();
	* This function is to restart the game.
	* @Retun none.
	**/
	void restartGame();

};

#endif // !TICTOKTOE


