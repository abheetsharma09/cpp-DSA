#include <iostream>
#include <vector>
using namespace std;

// LEETCODE PROBLEM //
// 238. Product of Array Except Self
// DESCRIPTION
/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
*/

// PRODUCT OF ARRAY EXCEPT SELF | Approach - 01 | Brute Force Approach
vector<int> Method01(vector<int> nums){
    vector<int> result;
    int arrSize = nums.size();
    int resultInt = 1;

    for(int i =0; i < arrSize;i++){
        int count =0;
        for(int j : nums){
            if(count != i){
                resultInt *= j;
            }
            count++;
        }
        result.push_back(resultInt);
        resultInt = 1;
    }
    return result;
}

// PRODUCT OF ARRAY EXCEPT SELF | Approach - 02 | Optimal Approach
vector<int> Method02(vector<int> nums){
    vector<int> result;
    int arrLen = nums.size();
    vector<int> prefix(arrLen,1);
    vector<int> suffix(arrLen,1);

    for (int i = 1; i < arrLen; i++){
        prefix[i] = prefix[i-1] * nums[i-1];
    }
    for (int i = arrLen-2; i >= 0; i--){
        suffix[i] = suffix[i+1] * nums[i+1];
    }
    for (int i =  0; i < arrLen;i++){
        int var;
        var = prefix[i] * suffix[i];
        result.push_back(var);
    }
    return result;
}

int main(){
    vector<int> a = {1,2,3,4};
    vector<int> result01 = Method01(a);
    vector<int> result02 = Method02(a);
    for(int i :result02){
        cout << i << endl;
    }
    return 0;
}