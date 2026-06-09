#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// BUBBLE SORT O(n^2)
/*
Repetedly swap two adjacent elements If they are in wrong order.
*/
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

/*
///////////// STRATEGY //////////
Find the minimum element in sorted array and swap it with element at 
begining.
*/

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

/*
Insert an element from unsorted array to its corrected position in sorted array.
*/
vector<int> insertedSort(vector<int> arr){
    for(int i = 0; i <arr.size(); i++){
    int curr = arr[i];
    int prev = i -1;
    while(prev >= 0 && arr[prev] >curr){
        arr[prev +1] = arr[prev];
        prev--;
    }
    arr[prev+1] = curr;
    }
    return arr;
}


int main(){
    vector<int> arr = {8,1,5,2,3};
    vector<int> sortedArr = insertedSort(arr);
    for(int i : sortedArr){
        cout << i<<endl;
    }
    return 0;
}