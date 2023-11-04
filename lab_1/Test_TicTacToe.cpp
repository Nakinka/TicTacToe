#include "TicTacToe.h"
#include "gtest/gtest.h"
#include <iostream>
#include <string>

using namespace std;
TEST(Getcoll, test1) {

	TicTacToe game;

	game.playerMove(1);

	EXPECT_EQ(game.getCell(1), 'X');
}

TEST(SwitchPlayer, test2) {
	TicTacToe game;

	EXPECT_EQ(game.getCurrentPlayer(), 'X');

	game.switchPlayer();

	EXPECT_EQ(game.getCurrentPlayer(), '0');

	game.switchPlayer();

	EXPECT_EQ(game.getCurrentPlayer(), 'X');
}

//TEST(PlayerMoveTest1, test3) {
//	TicTacToe game;
//	game.playerMove(1);
//	EXPECT_EQ(game.getCell(1), 'X');
//	game.switchPlayer();
//
//	game.playerMove(1);
//	int choice = 2;
//
//	EXPECT_EQ(game.getCell(2), '0');
//}
//
//TEST(PlayerMoveTest2, test4) {
//	TicTacToe game;
//	game.playerMove(-2);
//
//	int choice = 1;
//	EXPECT_EQ(game.getCell(1), 'X');
//}


//Win X col
TEST(CheckWin1, test5) {
	TicTacToe game;
	game.playerMove(1);
	game.switchPlayer();
	game.playerMove(4);
	game.switchPlayer();
	game.playerMove(2);
	game.switchPlayer();
	game.playerMove(5);
	game.switchPlayer();
	game.playerMove(3);
	EXPECT_TRUE(game.checkWin());
}


//Win X diag 1
TEST(CheckWin2, test6) {
TicTacToe game;
game.playerMove(1);
game.switchPlayer();
game.playerMove(2);
game.switchPlayer();
game.playerMove(5);
game.switchPlayer();
game.playerMove(3);
game.switchPlayer();
game.playerMove(9);
EXPECT_TRUE(game.checkWin());
}

//Win X diag 2
TEST(CheckWin3, test7) {
	TicTacToe game;
	game.playerMove(3);
	game.switchPlayer();
	game.playerMove(2);
	game.switchPlayer();
	game.playerMove(5);
	game.switchPlayer();
	game.playerMove(1);
	game.switchPlayer();
	game.playerMove(7);
	EXPECT_TRUE(game.checkWin());
}

//Win X row 
TEST(CheckWin4, test8) {
	TicTacToe game;
	game.playerMove(1);
	game.switchPlayer();
	game.playerMove(2);
	game.switchPlayer();
	game.playerMove(4);
	game.switchPlayer();
	game.playerMove(3);
	game.switchPlayer();
	game.playerMove(7);
	EXPECT_TRUE(game.checkWin());
}

//Win 0 col

TEST(CheckWin5, test9) {
	TicTacToe game;
	game.playerMove(1);
	game.switchPlayer();
	game.playerMove(2);
	game.switchPlayer();
	game.playerMove(3);
	game.switchPlayer();
	game.playerMove(5);
	game.switchPlayer();
	game.playerMove(4);
	game.switchPlayer();
	game.playerMove(8);
	EXPECT_TRUE(game.checkWin());
}

// Win 0 diag 1

TEST(CheckWin6, test10) {
	TicTacToe game;
	game.playerMove(1);
	game.switchPlayer();
	game.playerMove(3);
	game.switchPlayer();
	game.playerMove(2);
	game.switchPlayer();
	game.playerMove(5);
	game.switchPlayer();
	game.playerMove(8);
	game.switchPlayer();
	game.playerMove(7);
	EXPECT_TRUE(game.checkWin());
}

// Win 0 diag 2

TEST(CheckWin7, test11) {
	TicTacToe game;
	game.playerMove(2);
	game.switchPlayer();
	game.playerMove(1);
	game.switchPlayer();
	game.playerMove(3);
	game.switchPlayer();
	game.playerMove(5);
	game.switchPlayer();
	game.playerMove(8);
	game.switchPlayer();
	game.playerMove(9);
	EXPECT_TRUE(game.checkWin());
}

//Win 0 row

TEST(CheckWin8, test12) {
	TicTacToe game;
	game.playerMove(1);
	game.switchPlayer();
	game.playerMove(2);
	game.switchPlayer();
	game.playerMove(3);
	game.switchPlayer();
	game.playerMove(5);
	game.switchPlayer();
	game.playerMove(4);
	game.switchPlayer();
	game.playerMove(8);
	EXPECT_TRUE(game.checkWin());
}

TEST(CheckTie, test13) {
	TicTacToe game;
	game.playerMove(5);
	game.switchPlayer();
	game.playerMove(3);
	game.switchPlayer();
	game.playerMove(2);
	game.switchPlayer();
	game.playerMove(4);
	game.switchPlayer();
	game.playerMove(9);
	game.switchPlayer();
	game.playerMove(1);
	game.switchPlayer();
	game.playerMove(7);
	game.switchPlayer();
	game.playerMove(8);
	game.switchPlayer();
	game.playerMove(6);
	EXPECT_TRUE(game.checkTie());
}

//win false
TEST(CheckWin9, test13) {
	TicTacToe game;
	game.playerMove(1);
	EXPECT_FALSE(game.checkWin());
}



int main(int argc, char* argv[]) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
