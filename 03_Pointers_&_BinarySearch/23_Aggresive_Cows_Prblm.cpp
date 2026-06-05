#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> arr ,int midVal , int cows){
    int currCows = 1;
    int stallVal = arr[0]; //1,2,8,4,9
    for(int i :arr){
        if ((i - stallVal) >= midVal){
            currCows++;
            stallVal = i;//Places Cows
        }
        if (currCows == cows){
            return true;
        }
    }
    return false;
}

int aggresiveCows(vector<int> location , int cows){
    sort(location.begin() , location.end());//sort the parsed array
    int result =0;
    int start = location[0]; //1
    int end = location[location.size() -1];//9

    while (start <= end){
        int midVal = (start + end) /2;
        if (isPossible(location ,midVal ,cows) == true){
            //Seaarch in Right
            start = midVal +1;
            result = midVal;
        }else{
            //Search in Left
            end = midVal -1;
        }
    }
    return result;
}

int main(){
    vector<int> arr = {1,2,8,4,9};
    cout << aggresiveCows(arr , 3);
    return 0;
}