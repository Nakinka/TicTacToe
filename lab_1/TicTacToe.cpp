#include "TicTacToe.h"
#include <iostream>;

using namespace std;

TicTacToe::TicTacToe()
{
    for (int i(0); i < 3; i++) {
        for (int j(0); j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

char TicTacToe::getCell(int choice)
{
	if (choice >= 1 && choice <= 9) {
		int row = (choice - 1) / 3;
		int col = (choice - 1) % 3;
		return board[row][col];
	}
    else
	return getCell(choice);
	
}

char TicTacToe::getCurrentPlayer() {
    return player;
}


void TicTacToe::switchPlayer() {
	if (player == '0')
		player = 'X';
	else
		player = '0';
}


void TicTacToe::playerMove(int choice) {

    cout << "Move " << player << endl;

    while (!checkTie()) {
        if (choice >= 1 && choice <= 9) {
            int row = (choice - 1) / 3;
            int col = (choice - 1) % 3;

            if (board[row][col] == ' ') {
                board[row][col] = player;
                return displayBoard();
            }
            else {
                cout << "This cell is occupied " << player << " :(" << endl;
            }
        }
        else {
            cout << "Wrong move " << player << " >:^(" << endl;
        }

        cout << "Try again! " << endl;
       // cin >> choice;
    }

   

}

void TicTacToe::displayBoard() {
    for (int i(0); i < 3; i++) {
        cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << endl;
        if (i != 2)
            cout << "---|---|---" << endl;
    }
    cout << endl;
}

bool TicTacToe::checkWinnerRow()
{

    for (int i(0); i < 3; i++) {
        if ((board[i][0] == board[i][1] && board[i][0] == board[i][2]) && (board[i][0] != ' ')) {

            (board[i][0] == player ? 'X' : '0');
            cout << "Win " << player << endl;
            return true;
        }

    }
    return false;
}

bool TicTacToe::checkWinnerCol()
{
    for (int j(0); j < 3; j++) {
        if ((board[0][j] != ' ') && (board[0][j] == board[1][j] && board[0][j] == board[2][j])) {

            (board[0][j] == player ? 'X' : '0');
            cout << "Win " << player;
            return true;
        }

    }
    return false;
}

bool TicTacToe::checkWinnerDiag()
{
    if (((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
 (board[0][2] == board[1][1] && board[1][1] == board[2][0])) &&
        (board[1][1] != ' ')) {

        (board[1][1] == player ? 'X' : '0');
        cout << "Win " << player << endl;
        return true;
    }

    return false;
}

bool TicTacToe::checkWin()
{
    return (checkWinnerCol() || checkWinnerRow() || checkWinnerDiag());
}

bool TicTacToe::checkTie()
{
    for (int i(0); i < 3; i++) {
        for (int j(0); j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    cout << "Win Friendship";
    return true;
}