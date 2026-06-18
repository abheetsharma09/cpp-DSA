#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//LEETCODE PROBLEM | 560. Subarray Sum Equals K | log(O^3) in python
/*
class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        lst = []
        count = 0
        n = len(nums)
        for i in range(0,n):
            for j in range(i,n):
                tempLst = []
                tempVal = 0
                for l in range(i,j+1):
                    tempVal = tempVal + nums[l]
                    tempLst.append(nums[l])
                if tempVal == k:
                    count +=1
                if tempLst not in lst:
                    lst.append(tempLst)        
        return count
*/

//LEETCODE PROBLEM | 560. Subarray Sum Equals K |Brute Force Approach log(O^2)
int subArraySumM1(vector<int> nums,int k){
    int count = 0;
    int n = nums.size();
    for(int i =0;i <n;i++){
        int sum = 0;
        for(int j=i;j <n;j++){
            sum += nums[j];
            if(sum == k){count++;};
        }
    }
    return count;
}

int main(){
    return 0;
}