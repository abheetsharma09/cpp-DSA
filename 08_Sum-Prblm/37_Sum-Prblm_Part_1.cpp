#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>
using namespace std;

// BRUTE FORCE APPROACH | LEETCODE PROBLEM 1 | O(n^2)
vector<int> twoSumM1(vector<int> nums, int target){
    vector<int> result;
    for(int i = 0; i < nums.size(); i++){
        for(int j = 1; j < nums.size(); j++){
            if(nums[i] + nums[j] == target && i != j){
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result;
}

// BETTER APPROACH | O(logn)
vector<int> twoSumM2(vector<int> nums, int target){
    vector<int> result;
    sort(nums.begin() , nums.end());
    int start = 0;
    int end = nums.size() -1;
    while(start <= end){
        if(nums[start] + nums[end] == target){
            result.push_back(nums[start]);
            result.push_back(nums[end]);
            return result;
        }else if(nums[start] + nums[end] < target){//19 < 9
            start++;
        }else{
            end--;
        }
    }
    return result;
}

// MOST OPTIMAL SOLUTION - WRONG SOLUTION ---------->>>>>>>>>
// vector<int> twoSumM3(vector<int> nums, int target){
//     unordered_map<int , int> valIndex;
//     vector<int> result;
//     for(int i = 0;i < nums.size();i++){
//         int diffVal = target- nums[i];
//         valIndex[nums[i]] = target- nums[i];
//     }  
//     for(auto i :valIndex){
//         auto it2 = std::find(nums.begin(), nums.end(), i.second);
//         auto it1 = std::find(nums.begin(), nums.end(),i.first);
//         if(std::distance(nums.begin(), it1) != std::distance(nums.begin(), it2)){
//             if(it2 != nums.end()){
//                 if(it1 != nums.end()){
//                     result.push_back(std::distance(nums.begin(), it1));
//                 }
//                 result.push_back(std::distance(nums.begin(), it2));
//                 return result;
//             }
//             // cout << i.first << "," << i.second << endl;
//         }
//     }
//     return result;
// }

vector<int> twoSumM3(vector<int> nums, int target){
    unordered_map<int , int> valIndex;
    vector<int> result;
    for(int i = 0;i < nums.size();i++){
        int diffVal = target- nums[i];
        if(valIndex.find(diffVal) != valIndex.end()){
            result.push_back(i);
            result.push_back(valIndex[diffVal]);
        }
        valIndex[nums[i]] = i; 
    }  
    return result;
}

// LEETCODE PROBLEM - 2965. Find Missing and Repeated Values
vector<int> missingRepetativeValues(vector<vector<int>> grid){
    unordered_set<int> repVal;
    vector<int> result_Vec;
    int n =grid.size();
    int expSum = 0;
    for(int i = 0;i < n;i++){
        for(int j =0;j< n; j++){
            expSum =expSum +grid[i][j];
            std::pair<std::unordered_set<int>::iterator, bool> result = repVal.insert(grid[i][j]);
            if(!result.second){
                result_Vec.push_back(grid[i][j]);
            }
        }
    } 

// nSUM + a -b = expSum 
    int nSUM = ((n*n)*((n*n)+1))/2;
    if(result_Vec.size() >= 0){
        int b = (nSUM + result_Vec[0])-expSum;
        result_Vec.push_back(b);
        return result_Vec;
    }

    return result_Vec;
}

// LEETCODE PROBLEMS - 287. Find the Duplicate Number
int duplicateNum(vector<int> nums){
    
}

int main(){
    vector<int> result = missingRepetativeValues({{1,3} , {2,2}});
    for(int i : result){
        cout << i << endl;
    }
    return 0;
}