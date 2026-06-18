#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Daily Challenge | LEETCODE | 1344. Angle Between Hands of a Clock
double hoursminHandangle(int hour , int minutes){
    //angle=|30𝐻−5.5𝑀|
    if(hour == 12)(hour = 0);
    double angle = (30*hour) - (5.5 * minutes);
    if(angle <0){angle = angle * -1;};
    if(angle > 180)(angle = 360-angle);
    return angle;
}

// LEETCODE | 18. 4Sum
vector<vector<int>> fourSum(vector<int> nums, int target){
    sort(nums.begin() , nums.end());
    vector<vector<int>> result;
    int n = nums.size();
    for(int i = 0;i <n; i++){
        if(i > 0 && nums[i] == nums[i-1]){
            continue;
        }
        for(int j =i+1; j<n; j++){
            if(j > i+1 && nums[j] == nums[j-1]){
                continue;
            }
            int k = j+1;
            int l = n-1;
            while(k < l){
                long long int tempfourSum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                if(tempfourSum == target){
                    vector<int> fourSumArr= {nums[i],nums[j],nums[k],nums[l]};
                    result.push_back(fourSumArr);
                    k++; l--;
                    //For removing duplicate
                    while(k <l && nums[k] == nums[k -1]){
                        k++;
                    }
                    while(k <l && nums[l] == nums[l+1]){
                        l--;
                    }
                }else if(tempfourSum < target){
                    k++;
                }else{
                    l--;
                }
            }
        }
    }
    return result;
}

