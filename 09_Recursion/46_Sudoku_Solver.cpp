#include <iostream>
#include <vector>
using namespace std;

bool isSafe(std::vector<std::vector<char>>& board, int row, int col, int n,
                char target) {
        for (int i = 0; i < n; i++) {
            if (board[row][i] == target) {
                return false;
            }
        }
        for (int i = 0; i < n; i++) {
            if (board[i][col] == target) {
                return false;
            }
        }
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[startRow + i][startCol + j] == target) {
                    return false;
                }
            }
        }

        return true;
    }

    bool SS(std::vector<std::vector<char>>& board, int row, int col, int n) {
        char target = board[row][col];
        if (col == n) {
            return SS(board, row + 1, 0, n);
        }

        if (row == n) {
            return true;
        }
        if (board[row][col] != '.') {
            return SS(board, row, col + 1, n);
        }

        for (short int dig = 1; dig <= 9; dig++) {
            char target = dig + '0';
            if (isSafe(board, row, col, n, target)) {
                board[row][col] = target;
                if (SS(board, row, col + 1, n)) {
                    return true;
                }
                board[row][col] = '.';
            }
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        int n = board.size();
        SS(board, 0, 0, n);
    }

int main()
{
    std::vector<std::vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    solveSudoku(board);
}