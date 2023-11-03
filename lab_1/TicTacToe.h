#pragma once
class TicTacToe
{

private:
	char board[3][3];
	char player = 'X';

public:
	TicTacToe();
	void displayBoard();
	char getCell(int);
	char getCurrentPlayer();
	void switchPlayer();
	bool checkWinnerRow();
	bool checkWinnerCol();
	bool checkWinnerDiag();
	bool checkWin();
	void playerMove(int);
	bool checkTie();
};

