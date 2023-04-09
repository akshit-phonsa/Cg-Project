#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe {
public:
    TicTacToe();
    void display();
    void mouse(int button, int state, int x, int y);
    void reset();
private:
    int board[3][3];
    int turn;
};

#endif
