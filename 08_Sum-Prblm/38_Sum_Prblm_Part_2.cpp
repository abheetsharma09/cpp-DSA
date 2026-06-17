#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;


// LEETCODE SOLUTION 3 APPROACHES | 15. 3Sum

vector<vector<int>> threesumM1(vector<int>& nums){
    set <vector<int>> result;
    vector<vector<int>> ans;
    int n = nums.size();
    for(int i =0;i < n;i++){
        for(int j =i+1;j< n;j++){
            for(int k =j+1;k<n; k++){
                if((nums[i] + nums[j] + nums[k]) == 0){
                    vector<int> val = {nums[i], nums[j], nums[k]};
                    sort(val.begin() , val.end());
                    if(result.find(val) == result.end()){
                        result.insert(val);
                        ans.push_back(val);
                    }
                }
            }
        }
    }
    return ans;
}

vector<vector<int>> threesumM2(vector<int>& nums){
    vector<vector<int>> ans;
    set <vector<int>> result;
    int n = nums.size();
    for(int i =0;i < n;i++){
        set <int> valIndex;
        for(int j =i+1;j< n;j++){
            vector<int> triplate = {nums[i], nums[j]};
            int curr_targetVal = 0 - (nums[i] + nums[j]);
            if(valIndex.find(curr_targetVal) != valIndex.end()){
                triplate.push_back(curr_targetVal);
                sort(triplate.begin() , triplate.end());
                if(result.find(triplate) == result.end()){
                    result.insert(triplate);
                    ans.push_back(triplate);
                }
            }
            valIndex.insert(nums[j]);
        }
    }
    return ans;
}

vector<vector<int>> threesumM3(vector<int>& nums){
    vector<vector<int>> result;
    sort(nums.begin() , nums.end());
    for(int i = 0;i< nums.size();i++){
        if(i > 0 && nums[i] == nums[i-1]){
            continue;
        }
        int j =i+1;
        int k = nums.size() -1;
        while(j < k){
                int tempSum = nums[i] + nums[j] + nums[k];
                if(tempSum == 0){
                    vector<int> tempAns = {nums[i], nums[j], nums[k]};
                    result.push_back(tempAns);
                    while(j < k && nums[j] == nums[j+1]) j++;
                    while(j < k && nums[k] == nums[k-1]) k--;
                    j++; k--;
                }else if(tempSum < 0){ // if -ve then increment j
                    j++;
                }else{
                    k--;
                }
        }
    }
    return result;
}

int main(){
    return 0;
}