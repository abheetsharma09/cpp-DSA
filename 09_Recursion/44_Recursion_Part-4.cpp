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

// Leetcode Problem | 66.Plus One
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

// ;EETCODE PROBLEM | Permuations of String
class Solution {
public:
void findPermutations(vector<int>& arr, int start, vector<vector<int>>& masterAns) {
    if (start == arr.size()) {
        masterAns.push_back(arr); // Take a value copy photo
        return;
    }

    for (int i = start; i < arr.size(); i++) {
        swap(arr[start], arr[i]);                  // 1. Choose & Swap
        findPermutations(arr, start + 1, masterAns); // 2. Move Down
        swap(arr[start], arr[i]);                  // 3. Backtrack (Undo)
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> masterAns;
        findPermutations(nums, 0, masterAns);
        return masterAns;
    }
};


int main(){
    return 0;
}