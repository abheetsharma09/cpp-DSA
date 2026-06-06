#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Sort array with 0s,1s & 2s

// Approach -01 | Brute Force | O(nlogn)
vector<int> method01(vector<int> nums){
    sort(nums.begin() , nums.end());
    return nums;
}

// Approach -02 | Optimal Approach | O(n)
vector<int> method02(vector<int> nums){
    vector<int> result;

    for(int i : nums){
        if (i == 0){
            result.push_back(0);
        }
    }
    for(int i : nums){
        if (i==1){
            result.push_back(1);
        }
    }
    for(int i : nums){
        if(i == 2){
            result.push_back(2);
        }
    }

    return result;
}

vector<int> method03(vector<int> nums){
    /*
    0 - low = we store 0
    low - mid = we store 1[starts from the 0th element]
    mid - high = unsorted part of array[unknown][when there is no unknown then the array is sorted][starts from the 0th eleemnt]
    high - len(arr) -1 = we store 2
    */
    int numsLen = nums.size();
    int low = 0;
    int mid =0;
    int high = numsLen-1;

    while(mid <= high){
        if(nums[mid] ==0){
            swap(nums[low] , nums[mid]);
            low++;
            mid++;
        }else if(nums[mid] ==1){
            mid++;
        }else{
            swap(nums[mid] , nums[high]);
            high--;
        }
    }

    return nums;
}

int main(){
    vector<int> nums = {2,0,2,1,1,0,1,2,0,0};
    vector<int> result = method03(nums);
    for(int i : result){
        cout << i << endl;
    }
    return 0;
}