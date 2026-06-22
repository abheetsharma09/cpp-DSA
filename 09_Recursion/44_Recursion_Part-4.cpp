#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Daily Problem | Leetcode Problem - 1833
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin() , costs.end());
        int count = 0;
        int tempSum = 0;
        for(int var : costs){
            tempSum += var;
            count++;
            // if(tempSum == coins){
            //     return count;
            // }
            if(tempSum > coins){
                return count-1;
            }
        }
        return count;
    }
};

// // Leetcode Problem | 66.Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int n = digits.size() - 1;
        for (int i = n; i > -1; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;
            } else {
                digits[i] = digits[i] + 1;
                return digits;
            }
        }
        digits.insert(digits.begin() , 1);
        return digits;
    }
};

// // LEETCODE PROBLEM | Permuations of String
class Solution {
public:
void findPermutations(vector<int>& arr, int start, vector<vector<int>>& masterAns) {
    if (start == arr.size()) {
        masterAns.push_back(arr); // Take a value copy photo
        return;
    }

    for (int i = start; i < arr.size(); i++) { //Picks a number.
        swap(arr[start], arr[i]);                  // 1. Choose & Swap
        findPermutations(arr, start + 1, masterAns); // Recursion Calls: Dives deep down to find solutions.
        swap(arr[start], arr[i]);                  // Cleans up the array.
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> masterAns;
        findPermutations(nums, 0, masterAns);
        return masterAns;
    }
};

// LEETCODE PROBLEM | REMOVE DUPLICATE PERMUTATIONS | 47. Permutations II
void duplicatePermutations(vector<int>& arr, int start, vector<vector<int>>& masterAns) {
    if (start == arr.size()) {
        auto it = std::find(masterAns.begin(), masterAns.end(), arr);
        if (it == masterAns.end()) {
        masterAns.push_back(arr); 
        }
        return;
    }
    for (int i = start; i < arr.size(); i++) { //Picks a number.
        swap(arr[start], arr[i]);                  // 1. Choose & Swap
        duplicatePermutations(arr, start + 1, masterAns); // Recursion Calls: Dives deep down to find solutions.
        swap(arr[start], arr[i]);                  // Cleans up the array.
    }
}
// vector<vector<int>> permuteUnique(vector<int>& nums) {
vector<vector<int>> permuteUnique() {
    // LOCAL TESTING
    vector<int> nums = {1,1,2};
    vector<vector<int>> masterAns;
    duplicatePermutations(nums, 0, masterAns);
    for(int i = 0; i<masterAns.size(); i++){
        for(int j =0;j <masterAns[0].size(); j++){
            std::cout << masterAns[i][j] << " ";
        }
        std::cout << endl;
    }
    return masterAns;
}

int main(){
    permuteUnique();
    return 0;
}