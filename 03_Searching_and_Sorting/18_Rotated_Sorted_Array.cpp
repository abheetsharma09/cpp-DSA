#include <iostream>
#include <vector>
using namespace std;

// LEETCODE PROBLEM //
// 33. Search in Rotated Sorted Array //
/*
There is an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
*/
/*
Be careful donot go in the -ve indices
//////////////////////////////////////
Features of a Rotated sorted array is that the whole array may not be sorted but atleast the 1st half or 2nd half is sorted.
So we have to run the Binary search on thesorted part.
*/
int Solution01(vector<int> nums, int target)
{
    int startVal = 0;
    int endVal = (nums.size()) - 1;

    while (startVal <= endVal){
        int midIndex = (startVal + endVal) / 2;
        if (target == nums[midIndex]){
            return midIndex;
        }

        if (nums[startVal] <= nums[midIndex]){
            if (nums[startVal] <= target && target <= nums[midIndex]){ // 1st Half Sorted
                endVal = midIndex - 1;
            }
            else{
                startVal = midIndex + 1;
            }
        }else{
            if (nums[midIndex] <= target && target <= nums[endVal]){ // 2nd Half Sorted
                startVal = midIndex + 1;
            }else{
                endVal = midIndex - 1;
            }
        }
    }
    return -1;
}


int main()
{
    vector<int> a = {6, 7, 1, 2, 3, 4, 5};
    vector<int> b = {5,1,3};
    cout << Solution01(b, 6) << endl;
    return 0;
}