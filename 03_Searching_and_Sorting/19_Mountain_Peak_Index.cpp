#include <iostream>
#include <vector>
using namespace std;

// LEETCODE PROBLEMS //
// 852. Peak Index in a Mountain Array
/*
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
Return the index of the peak element.
Your task is to solve it in O(log(n)) time complexity.

Example 1:

Input: arr = [0,1,0]

Output: 1
*/

// APPROACH - 01 | BRUTE FORCE APPROACH
int approach01(vector<int> arr){
    int arrLen = arr.size();
    for (int i = 1; i < arrLen; i++){
        if(arr[i] > arr[i+1] && arr[i] > arr[i-1]){
            return i;
        }
    }
    return 0;
}

// APPROACH - 02 | OPTIMAL APPROACH THROUGH BINARY SEARCHING
int approach02(vector<int> arr){
    int start = 1;
    int end = arr.size() -1;
    while(start <= end){
        int midIndex = start + ((start +end) /2);
        if(arr[midIndex] > arr[midIndex -1] && arr[midIndex] > arr[midIndex +1]){
            return midIndex;
        }
        if (arr[midIndex] > arr[midIndex -1]){
            start = midIndex+1;
        }else if (arr[midIndex] > arr[midIndex +1]){
            end = midIndex -1;
        }
    }
    return 0;
}

int main(){
    vector<int> a = {0,3,8,9,5,2};
    cout << approach01(a) << endl;
    cout << approach02(a) << endl;
    return 0;
}