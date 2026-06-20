#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printSubSets(vector<int> & arr, vector<int> & ans, int i ,vector<vector<int>> & masterAns){
    if(i == arr.size()){
        masterAns.push_back(ans);
        return;
    }
    ans.push_back(arr[i]);
    printSubSets(arr,ans, i+1 , masterAns);
    ans.pop_back();
    printSubSets(arr,ans , i+1 ,masterAns);
}

void printUniqueSubSets(vector<int> & arr, vector<int> & ans, int i ,vector<vector<int>> & masterAns){
    sort(arr.begin() , arr.end());
    if(i == arr.size()){
        masterAns.push_back(ans);
        return;
    }
    ans.push_back(arr[i]);
    printUniqueSubSets(arr,ans, i+1 , masterAns);
    ans.pop_back();
    int idx = i+1;
    while(i < arr.size() && arr[idx] == arr[idx-1]){idx++;}
    printUniqueSubSets(arr,ans , i+1 ,masterAns);
}

int main(){
    vector<int> arr = {1,2,3};
    vector<int> ans = {};
    vector<vector<int>> masterAns;
    int i = 0;
    printUniqueSubSets(arr, ans ,i , masterAns);
    return 0;
}