#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isValid(vector<vector<int>> board, int row ,int col,int n,int execVal){
    if(row < 0 || col <0 || row >= n || col >=n || board[row][col] != execVal){
        return false;
    }

    if(execVal == ((n*n)-1)){
        return true;
    }

    //all 8 combinations of knight
    bool ans1 = isValid(board ,row-2,col+1,n,execVal+1);
    bool ans2 = isValid(board ,row-1 ,col+2, n, execVal+1);
    bool ans3 = isValid(board ,row+1 ,col+2, n, execVal+1);
    bool ans4 = isValid(board ,row+2 ,col+1, n, execVal+1);
    bool ans5 = isValid(board ,row+2 ,col-1, n, execVal+1);
    bool ans6 = isValid(board ,row+1 ,col-2, n, execVal+1);
    bool ans7 = isValid(board ,row-1 ,col-2, n, execVal+1);
    bool ans8 = isValid(board ,row-2 ,col-1, n, execVal+1);

    if(ans1||ans2||ans3||ans4||ans5||ans6||ans7||ans8){
        return true;
    }

    return false;
}

int main(){
    vector<vector<int>> grid;//sample chess board
    int n = grid.size();
    isValid(grid , 0,0,n,0);
    return 0;
}