#include <iostream>
#include <vector>
using namespace std;

//Binary Search Algorithm - O(logn) - 
/*
Applies only on sorted data.
*/

// Binary Search | Approach -01 | Brute Force Approach
int BinarySearch_m1(vector<int> arr , int target){
    int start = 0;
    int end = (arr.size()) -1;
    while (start <= end){
        long long int midIndex = (start +end)/2;
        if(target > arr[midIndex]){
            start = midIndex +1;
        }else if(target < arr[midIndex]){
            end = midIndex -1;
        }else if(target == arr[midIndex]){
            return midIndex;
        }
    }
    return 0;
}

int BinarySearch_m2(vector<int> arr, int target){
    return 0;
}

int main(){
    vector<int> arr = {-1,0,3,4,5,9,12};
    cout << BinarySearch_m1(arr , 12) << endl;
    return 0;
}