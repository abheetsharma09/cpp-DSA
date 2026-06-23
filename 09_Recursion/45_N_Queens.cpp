#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(vector<string>& board, int row, int j, int n){
    for(int i =0;  i<n;i++){
        if(board[row][i] == 'Q'){
                return false;
        }
    }
    for(int i =0;  i<n;i++){
        if(board[i][j] == 'Q'){
                return false;
        }
    }
    for(int i =row,k = j; i>= 0 && k >=0;i--,k--){
        if(board[i][k] == 'Q'){
            return false;
        }
    }
    for(int i =row,k = j; i>= 0 && k < n;i--,k++){
        if(board[i][k] == 'Q'){
            return false;
        }
    }
 return true;
}

void nqueens(vector<string> & board, int row, int n , vector<vector<string>>& result){
    if(row == n){
        result.push_back(board);
        return;
    }
    for(int j = 0; j< n;j++){
        if(isSafe(board , row, j , n)){
            board[row][j] = 'Q';
            nqueens(board, row+1, n , result);
            board[row][j] = '.';
        }
    }
}
vector<vector<string>> solveNQueens(int n) {
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> result;
    nqueens(board , 0, n ,result);
    return result;
}

int main(){

}