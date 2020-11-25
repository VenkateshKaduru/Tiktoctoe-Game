#pragma once
#ifndef TICTOKTOE_H_
#define TICTOKTOE_H_

#include<vector>
class Functions {

private:
	std::vector<char> square;
	int Player;
	int choice;
	char mark;
public:
	Functions();
	void display();
	int choose();
	int check();
	void result(int i);

};

#endif // !TICTOKTOE


