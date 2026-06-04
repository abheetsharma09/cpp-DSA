#include <iostream>
#include <vector>
using namespace std;

// Painter's Partition Problem
//STATEMENT
/*
Given are N boards of length of each given in form of array, and M painters , such
that each painters take 1 unit of time to paint 1 unit of the board.
The task is to find the minimum time to paint all boards under the constraints 
that any painter will only paint continous sections of boards.
*/
bool ifValid(vector<int> sheets, int painter , int midVal){
    int tempVal =0;
    int count = 0;
    for (int i : sheets){
        tempVal = tempVal +i;
        if (tempVal > midVal){
            tempVal =i;
            count++;
        }
    }
    if (count >= painter){
        return false;
    }
    return true;
}

int painterPartion(vector<int> sheets, int painter){
    int start = 0;
    int end = 0;
    int result = 0;
    for (int i : sheets){
        end = end +i;
    }
    while(start <= end){
        int midVal = (start + end) /2;
        if (ifValid(sheets , painter , midVal) == true){
            //Search in Left
            end = midVal - 1;
            result = midVal;
        }else{
            //Search in Right
            start = midVal +1;
        }
    }
    return result;
}

int main(){
    vector<int> A = {40,30,10,20};
    cout << painterPartion(A , 2) << endl;
    return 0;
}