#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// BUBBLE SORT O(n^2)
vector<int> bubbleSort(vector<int> arr){
    int arrLen = arr.size();
    for (int i = 0; i < arrLen-1; i++){
        for (int j = 0; j<arrLen-i-1; j++){
            // cout << i << "," <<j << endl;
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
            cout << "*" << endl;
        }
        cout << endl;
    }
    
    return arr;
}

vector<int> selectionSort(vector<int> arr){
for(int i =0; i < arr.size(); i++){
    int smallestInd = i;
    for(int j = i+1; j < arr.size(); j++){
        if(arr[j] < arr[smallestInd]){
            smallestInd = j;
        }
    }
    swap(arr[i] , arr[smallestInd]);
}
return arr;    
}

vector<int> insertedSort(vector<int> arr){

}


int main(){
    vector<int> arr = {8,1,5,2,3};
    vector<int> sortedArr = selectionSort(arr);
    for(int i : sortedArr){
        cout << i<<endl;
    }
    return 0;
}