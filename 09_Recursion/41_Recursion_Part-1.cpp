#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 1732. Find the Highest Altitude | Daily Leetocode Problem
int dailyProblem(vector<int> gain = {-5,1,5,0,-7})
{
    vector<int> result = {0};
    int maxVal = result[0];
    for (int i = 0; i < gain.size(); i++)
    {
        int tempVal = result[i] + gain[i];
        maxVal = max(maxVal , tempVal);
        result.push_back(tempVal);
    }
    // cout << maxVal;
    return maxVal;
}

void recursion(int n){
    cout << n << endl;
    if(n > 1){
        recursion(n-1);
    }
}

// WROKING OF RECURSION
/*
factorial(4) is frozen waiting for: 4 * factorial(3)
factorial(3) is frozen waiting for: 3 * factorial(2)
factorial(2) is frozen waiting for: 2 * factorial(1)
factorial(1) is frozen waiting for: 1 * factorial(0)
*/

// RECURSION TIME-COMPLEXITY
/*
TIME COMPLEXITY = TOTAL NO. OF RECURSION CELLS *WORK IN EACH CELLS
*/
int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

// RECURSION SPACE-COMPLEXITY
/*
SPACE COMPLEXITY = DEPTH OF REC TREE * MEMORY IN EACH CELL
*/

int sumofN(int n){
    if(n==0){
        return 0;
    }
    return n + sumofN(n-1);
}

int main(){
    cout << sumofN(4) << endl;
    dailyProblem();
    return 0;
}