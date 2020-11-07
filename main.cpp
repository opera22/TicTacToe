#include <iostream>
#include <map>
using namespace std;

void drawBoard(char board[]);
int gameLoop(char board[]);
bool boardIsFull(char board[]);
bool checkForWin(char board[]);

int main() {


    //std::map<int, std::string> board;
    char board[9] = {'X', 'O', ' ', ' ', ' ', ' ', 'O', ' ', 'X'};
    std::map<int, bool> idk;

    cout << "Welcome to TicTacToe!" << endl;
    cout << "---------------------" << endl;
    cout << endl;

// 2 means someone won the game
// 1 means it's a draw
// 0 means continue loop
    gameLoop(board);
    
    return 0;

}

bool checkForWin(char board[]) {



    return false;
}

void drawBoard(char board[]) {

    cout << "1    |2    |3          " << endl;
    cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  " << endl;
    cout << "_____|_____|_____      " << endl;
    cout << "4    |5    |6          " << endl;
    cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  " << endl;
    cout << "_____|_____|_____      " << endl;
    cout << "7    |8    |9          " << endl;
    cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  " << endl;
    cout << "     |     |           " << endl;

    return;
}

bool boardIsFull(char board[]) {


    return false;

}

int gameLoop(char board[]) {

    int white_pick = 0;
    int black_pick = 0;
    while (white_pick < 1 || white_pick > 9 || board[white_pick - 1] != ' ') {
        cout << "White, enter an open square (1-9):" << endl;
        cin >> white_pick;
    }
    if (checkForWin(board) == true) {
        drawBoard(board);
        return 2;
    }
    if (boardIsFull(board) == true) {

        return 1;

    }
    drawBoard(board);

    return 0;
}
