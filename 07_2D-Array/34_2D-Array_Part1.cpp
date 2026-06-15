#include <iostream>
#include <vector>
using namespace std;

void matrix(){
    int matrix[4][3] = {{1,2,3} , {4,5,6} , {7,8,9} , {10,11,12}};
    int rows = 4;//first data
    int coloumn = 3;//second data

    cout << matrix[0][2] << endl;//accesing data of a 2d matrix

    // accesing data of 2d matrix with loop[nested]
    for(int i = 0;i<rows; i++){
        for(int j = 0;j<coloumn;j++){
            cout << matrix[i][j] << endl;
        }
    }

    //2D ARRAY IN MEMORY
//1> Row Major - gets stored in the continous memory location row by row
//2> Coloumn Major - continous memory location coloum by coloum
}

string searching2dARRAY(int target){
    //Linear Search in 2d Array
    int matrix[4][3] = {{1,2,3} , {4,5,6} , {7,8,9} , {10,11,12}};
    int rows = 4;//first data
    int coloumn = 3;//second data
    for(int i = 0;i<rows; i++){
        for(int j = 0;j<coloumn;j++){
            if(matrix[i][j] == target){
                pair<int ,int> keyVal = {i ,j};
                return "true";
            }
        }
    }
    return "false";
}

int maxRowSum(){
    int matrix[4][3] = {{1,2,3} , {4,5,6} , {7,8,9} , {10,11,12}};
    int rows = 4;//first data
    int coloumn = 3;//second data
    int maxSum = 0;
    for(int i = 0;i<rows; i++){
        int tempVal = 0;
        for(int j = 0;j<coloumn;j++){
            tempVal = tempVal + matrix[i][j];
        }
        maxSum = max(maxSum , tempVal);
    }
    return maxSum;
}

int diagonalSum(){
    int matrix[4][4] = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12} , {13,14,15,16}};
    int rows = 4;//first data
    int coloumn = 4;//second data
    int firstSum = 0;
    for(int i = 0;i<rows; i++){
        for(int j = 0;j <coloumn; j++){
            if(j == i || j == rows-i-1){
                firstSum = firstSum + matrix[i][j];
            }
        }
    }
    return firstSum;
}

int main(){
    // cout << searching2dARRAY(70);
    // matrix();
    // cout << maxRowSum() << endl;
    cout << diagonalSum() << endl;
    //2D Vector 
    vector<vector<int>> matrices_Vec = {{1,2,3} , {4,5,6} , {7,8,9} , {10,11,12}};
    return 0;
}