#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// LEETCODE PROBLEM | 88. Merge Sorted Array ///////////
// Merge 2 Sorted Arrays | Optimal Method
/*
// DESCRIPTION 
We take 3pointer i=n-1, j=m-1 ,ijx=(m+n)-1 then i comapre the ith element of
A to jth element of B the who ever is greater i put that number on the ijxth position of the 
array and move the pointer which belongs to the greater number and ijx backward then repeat the 
process till my i and j < 0 and at last i check wheter any eleemnt is left in both the arrays i 
or j < 0 then i put that number at the ijx poisition of the array..
*/
void merge2SortedArraysM2(vector<int> nums1 ,vector<int> nums2 ,int n ,int m){
    int ijx = (m+n)-1;//Points to the Last element of A
    int i = m-1;//Points to n-1 Element of A
    int j = n-1;//Points to last element of B

    while(i >= 0 && j >= 0){
        if(nums1[i] > nums2[j]){
            nums1[ijx] = nums1[i];
            ijx--;
            i--;
        }else{
            nums1[ijx] = nums2[j];
            ijx--;
            j--;
        }
    }
    while(i >=0){
        nums1[ijx] = nums1[i];
        i--;
        ijx--;
    }
    while(j >=0){
        nums1[ijx] = nums2[j];
        j--;
        ijx--;
    }
}

// Merge 2 Sorted Arrays | Brute Force Method
vector<int> merge2SortedArraysM1(vector<int> A, vector<int> B){
    int i = 0;
    int j = 0;
    vector<int> result;
    while(i < A.size() && j < B.size()){//Runs the Loop on both the Variable to avoid indexing error
        if(A[i] <= B[j]){
            result.push_back(A[i]);
            i++;
        }else if(A[i] > B[j]){
            result.push_back(B[j]);
            j++;
        }
    }
    //If any element left in the array
    while(i < A.size()){
        result.push_back(A[i]);
        i++;
    }
    while(j < B.size()){
        result.push_back(B[j]);
        j++;
    }
    return result;
}

// 31. Next Permutation
vector<int> nextPermutation(vector<int> nums){
    int breakPoint = -1;
    //Finding the Breakpoints
    for(int i = nums.size()-2; i > -1 ; i--){
        if(nums[i] < nums[i+1]){
            breakPoint = i;
            break;
        }
    }
    if(breakPoint == -1){
        int i = 0;
        int j = nums.size() -1;
        while(i < j){
            swap(nums[i] , nums[j]);
            i++;
            j--;
        }
        return;
    }
    for(int i = nums.size()-1; i > breakPoint; i--){
        if(nums[breakPoint] < nums[i]){
            swap(nums[i] , nums[breakPoint]);
            break;
        }
    }
    int i = breakPoint + 1;
    int j = nums.size() -1;
    while(i <j){
        swap(nums[i] , nums[j]);
        i++;
        j--;
    }
}

int main(){
    vector<int> A= {1,2,3};
    vector<int> B= {2,5,6};
    // merge2SortedArraysM2(A,B,3,3);
    nextPermutation(A);

    return 0;
}
