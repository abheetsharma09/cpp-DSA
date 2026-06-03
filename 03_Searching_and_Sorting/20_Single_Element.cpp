#include <iostream>
#include <vector>
using namespace std;

//Approach - 01 | Brute Force Method | Linear Time Complexity
int solution01(vector<int> nums){
    if (nums.size() == 1){
        return nums[0];
    }
    for (int i = 1; i < nums.size(); i++){
        if (nums[i] != nums[i+1] && nums[i] != nums[i-1]){
            return nums[i];
        }
    }
    return 0;
}
// Approach - 02 | Optimal Approach | O(log(n))
int solution02(vector<int> nums){
    int start =0;
    int end = nums.size() -1;
    if (end == 0){
        return nums[0];
    }
    while (start <= end){
        int midIndex = (start + end) /2;
        if (midIndex == 0 && nums[midIndex] != nums[midIndex +1]){
            return nums[midIndex];
        }
        if (midIndex == end && nums[midIndex] != nums[midIndex -1]){
            return nums[midIndex];
        }
        if (nums[midIndex] != nums[midIndex +1] && nums[midIndex] != nums[midIndex -1]){
            return nums[midIndex];
        }

        if (midIndex % 2 == 1){
            if (nums[midIndex] == nums[midIndex -1]){
                start = midIndex +1;
            }else if (nums[midIndex] == nums[midIndex +1]){
                end = midIndex -1;
            }
        }else if (midIndex % 2 == 0){
            if (nums[midIndex] == nums[midIndex -1]){
                end = midIndex -1;
            }else if (nums[midIndex] == nums[midIndex +1]){
                start = midIndex +1;
            }
        }
    }
    return 0;
}


int main(){
    vector<int> a = {3,3,7,7,10,11,11};
    cout << solution01(a) << endl;
    cout << solution02(a) << endl;
    return 0;
}