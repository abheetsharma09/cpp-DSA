#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// EASY LEVEL LEETCODE QUESTION TO REMOVE DUPLICATE FROM ARRAY
int removeDuplicates(vector<int>& nums) {
    unordered_set<int> temp_Set;
    
    for(int var :nums){
        temp_Set.insert(var);
    }
    return nums.size() - temp_Set.size();
}

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout << removeDuplicates(nums);
    return 0;
}

// COMBINATION SUM QUESTION | USING BACKTRACING AND RECURSION
    void cS(vector<int> & candidates, int i ,vector<int> &comb,vector<vector<int>>& masterAns , int target){
        if(target == 0){
            masterAns.push_back(comb);
            return;
        }
        if(i == candidates.size() || target < 0){
            return;
        }
        // Choice 1: Include the current element and allow reuse (do not increment i)
        comb.push_back(candidates[i]);
        cS(candidates, i, comb, masterAns, target - candidates[i]); 
        comb.pop_back(); // Backtrack

        // Choice 2: Skip the current element and move to the next
        cS(candidates, i + 1, comb, masterAns, target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> masterAns;
        vector<int> comb;
        cS(candidates , 0,comb, masterAns , target);
        return masterAns;
    }
