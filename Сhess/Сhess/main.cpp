#include <iostream>
#include <string>
#include "chess.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	Board b;
	string s;
	bool newgame = true;
	while(newgame){
		b.setBoard();
		while (b.playGame());
		cout << "��������� ��� ���� ������? (y - ��) ";
		cin >> s;
		if (s != "y")
			newgame = false;
	}


	return 0;
}