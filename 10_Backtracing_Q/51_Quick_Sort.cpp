#include <iostream>
#include <vector>

using namespace std;
/*
// Quick Sort - Pivit[special index which around we are going to sort the
 whole array] & Partition.

//Step-0 - For this Algorithm we are going to put the last Ele. as Pivit
//Step-1 - Pick the Pivit
//Step-2 - After Picking the Pivit We must ensure that the left side 
contains values less than pivit and right side contains greater values than
pivit and that how we explit left and right.[not necessary that the parts 
are sorted]
//Step-3 - Call Quick Sort for Left half and right half.[Recursivly]
*/
int pivit(vector<int> & arr , int start , int end){
    int pivit = arr[end];
    int idx = start-1;
    for(int j = start; j < end; j++){
        if(arr[j] <= pivit){
            idx++;
            swap(arr[idx] , arr[j]);
        }
    }
    idx++;
    swap(arr[idx] , arr[end]);
    return idx;
}
void quickSort(vector<int> & arr , int start , int end){
    if(start < end){
        int pivit_INX = pivit(arr,start,end);
        //left
        quickSort(arr,start, pivit_INX-1);
        //right
        quickSort(arr,pivit_INX+1 , end);
    }
}

int main(){
    vector<int> arr = {324,41,5,11,4};
    quickSort(arr , 0, arr.size() -1);
    for(int i : arr){
        cout << i<< endl;
    }
}