// MAXIMUM SUBARRAY SUM | KADANE's ALGORITHM
#include <iostream>
#include <vector>
using namespace std;

///////////////////////////////By BRUTE FORCE APPROACH//////////////////////////////////
int maxSubArraySum()
{
    // Here in this array {2,3,4}, {2,3},{4,5} is a Subarray.
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> sumSUBarray;

    // Number of Subarray Formulae = (n*(n+1))/2
    int highestSubArraySUM = 0;
    int vecSize = vec.size();                                // Size of the Vector Array
    int vecSubArrayFormulae = (vecSize * (vecSize + 1)) / 2; // How many Subarray

    // List every possiblity of Subarray
    for (short int i = 0; i < vecSize; i++)
    {
        for (short int j = 0; j < vecSize; j++)
        {
            if (i == j)
            {
                cout << "[" << vec[i] << "]" << endl;
            }
            else if (i != j && j > i)
            {
                int maxSubArraySum = 0;
                cout << "[";
                // cout << "[" << vec[i] << "," << vec[j] << "]" << endl;
                for (short int k = i; k < j + 1; k++)
                {
                    // Brute Force Approach to find the Maximum Subarray Sum
                    // 1.> We sum all the numbers of Sub Array
                    maxSubArraySum += vec[k];

                    cout << vec[k] << ","; // Outputs the SubArray possibility
                }
                cout << "]" << endl;

                // 2.> Push every sumed up value to the Vector Array
                sumSUBarray.push_back(maxSubArraySum);
            }
        }
        cout << endl;
    }

    // Find the Highest Number in the Vector Array
    for (int i : sumSUBarray)
    {
        // Maximum Subarray Sum
        if (i > highestSubArraySUM)
        {
            highestSubArraySUM = i;
        }
    }

    cout << "Highest SUB Array Sum : " << highestSubArraySUM;
    return highestSubArraySUM;
}

////////////////////////////By KADANE's ALGORITHM//////////////////////////////
int kadaneAlgoritm()
{
    vector<int> vec = {3, -4, 5, 4, 1, -7, 8};
    int maxSum = INT_MIN; // Set it to the -infinity
    int currSum = 0;
    for (int i : vec)
    {
        currSum += (i);
        maxSum = max(currSum, maxSum); // Returns the max value out of both
        if (currSum < 0) //If all the numbers in vector is -ve
        {
            currSum = 0;
        }
    }

    cout << maxSum;
    return maxSum;
}

///LeetCode Problem - 53. Maximum Subarray
/*
Given an integer array nums, find the subarray with the largest sum, and 
return its sum.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currSum = 0;
        for(int i : nums){ //Takes nums as a input vector
            currSum += i;
            maxSum = max(maxSum , currSum);
            if (currSum < 0){
                currSum =0;
            }
        }
        return maxSum;
    }
};


int main()
{
    kadaneAlgoritm();
    // maxSubArraySum();
    return 0;
}