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

    cout << "Welcome to TicTacToe!" << endl;
    cout << "---------------------" << endl;
    cout << endl;
    drawBoard(board);

// 2 means someone won the game
// 1 means it's a draw
// 0 means continue loop
    bool result = 0;
    while (result == 0) {

        result = gameLoop(board);

    }
    
    if (result == 1) {

        cout << endl;
        cout << "~~~~~~It's a draw!~~~~~~" << endl;

    }
    else if (result == 2) {

        cout << endl;
        cout << "~~~~~~We have a winner!~~~~~~" << endl;

    }

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

    for (int i = 0; i < 9; i++) {
        if (board[i] == ' ') {
            return false;
        }
    }
    return true;

}

int gameLoop(char board[]) {

    int o_pick = 0;
    int x_pick = 0;
    while (o_pick < 1 || o_pick > 9 || board[o_pick - 1] != ' ') {
        cout << "Player 1, enter an open square (1-9):" << endl;
        cin >> o_pick;
    }
    // modify board for O
    board[o_pick - 1] = 'O';

    if (checkForWin(board) == true) {
        return 2;
    }
    if (boardIsFull(board) == true) {
        return 1;
    }
    drawBoard(board);

    while (x_pick < 1 || x_pick > 9 || board[x_pick - 1] != ' ') {
        cout << "Player 2, enter an open square (1-9):" << endl;
        cin >> x_pick;
    }
    // modify board for X
    board[x_pick - 1] = 'X';
    
    if (checkForWin(board) == true) {
        return 2;
    }
    if (boardIsFull(board) == true) {
        return 1;
    }
    drawBoard(board);

    return 0;
}
