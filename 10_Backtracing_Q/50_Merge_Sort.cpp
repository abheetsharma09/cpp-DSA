#include <iostream>
#include <vector>

using namespace std;
// Merge Sort - Divide and Conquer
void merge(vector<int>& arr, int s,int mid,int end){
    int i = s;
    int j = mid+1;
    vector<int> tempVal;
    while(i <= mid && j <= end){
        if(arr[i] < arr[j]){
            tempVal.push_back(arr[i]);
            i++;
        }else{
            tempVal.push_back(arr[j]);
            j++;
        }
    }
    while(i <= mid){
        tempVal.push_back(arr[i]);
        i++;
    }
    while(j <= end){
        tempVal.push_back(arr[j]);
        j++;
    }

    for(int idx  =0; idx <tempVal.size(); idx++){
        arr[idx + s]  = tempVal[idx];
    }
}

void mergeSort(vector<int> &arr,int start ,int end){
    if(start < end){
        int mid = start + ((end-start) /2);

        //Left
        mergeSort(arr, 0 , mid);
        //Right
        mergeSort(arr , mid+1, end);
        merge(arr, start ,mid,end);
    }
}

int main(){
    vector<int> arr = {324,41,5,11,4};
    mergeSort(arr , 0, arr.size() -1);
    for(int i : arr){
        cout << i<< endl;
    }
    return 0;
}