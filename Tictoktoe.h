#ifndef TICTOKTOE_H_
#define TICTOKTOE_H_

#include<vector>
class Tictoktoe {

private:
	std::vector<char> m_square;
	int m_player;
	int m_choice;
	char m_mark;
public:
	Tictoktoe();
	/*
		Description: Displays njjjkkl
		Return value: none
	*/
	void display(); //

	/*
	
	*/
	int choose();
	int check();
	void result(int i);
	void reset();

};

#endif // !TICTOKTOE


