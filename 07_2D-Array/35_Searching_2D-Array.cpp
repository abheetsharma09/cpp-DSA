#include <iostream>
#include <vector>
using namespace std;
// LEETCODE PROBLEM | 74. Search a 2D Matrix 
bool search2dArray(vector<vector<int>> matrix , int target){
    int rows = matrix.size();
    int column = matrix[0].size();
    for(int i = 0;i < rows; i++){
            if(matrix[i][0] == target){
                return true;
            }else if(matrix[i][0] <= target && target <= matrix[i][column-1]){
                for(int j = 0;j <column; j++){
                    if(matrix[i][j] == target){
                        return true;
                    }
                }
            }
    }
        return false;
}

int main(){
    return 0;
}