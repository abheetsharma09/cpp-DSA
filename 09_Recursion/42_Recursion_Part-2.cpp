#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//LEETCODE QUESTION
// f(n) = f(n-1) + f(n-2)
int fibonacci(int n){
    if(n==1 || n==0){ // Base case of fibonacci
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

//is the array sorted or not
bool isSorted(vector<int> arr , int n){
    // 1,2,3,4,5 this is sorted[here i < i+1] so we reverse arr[n-1] > arr[n-2]
    if(n == 0 || n==1){
        return true;
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr,n-1);
    /*
    // This is exactly what single return line does!
    if (arr[n-1] >= arr[n-2]) {
        return isSorted(arr, n-1); 
    } else {
        return false; 
    }
    */
}

// LEETCODE QUESTION | 704. Binary Search
int binarySearch(vector<int> arr, int target, int start ,int end){
    if(start <= end){
        int mid = (start + end) /2;
        if(target == arr[mid]){
            return mid;
        }else if(target > arr[mid]){
            // 2nd half
            return binarySearch(arr, target,mid+1,end);
        }else{
            return binarySearch(arr,target,start,mid-1);
        }
    }
    return -1;
}

int search(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size() -1;
    return binarySearch(nums , target , start , end);
}

int main(){
    cout << fibonacci(4) << endl;
}