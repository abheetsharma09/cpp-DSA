#include <iostream>
using namespace std;

//First Data Structure ///////ARRAY//////////////////
void funcA(){
    //Here we initiallize a Array with 3 capacity and every stored value as a Integer
    int age[4] = {15,77,90,98};
    cout << age[0] << endl;//Access the data stored by index value.

    //Acess Data Stored using the Loops
    int size = (sizeof(age))/4; //Sizeof() returns how much bytes of memory does it occupies.
    //Divide the size with 4 to get the actual value

    //LOOPS - Accesing Data 1 by 1
    for (short int i = 0; i < size; i++)
    {
        cout << age[i] << endl;
    }
}

//Setting and Acessing Data in the Array
void funcB(){
    int size = 5;
    int arr[size]; //Blank Array
    for (short int i = 0; i < size; i++)//Set the Data in the Loops upto size[5]
    {
        cout << "Enter Number - " << i+1 << " ";
        cin >> arr[i];
        cout << endl;
    }
    
    cout << "---------------" << endl;
    for (short int j = 0; j < size; j++)
    {
        cout << arr[j] << endl;
    }
}

//Question -01 | Finding smallest and largest value in the array
void funcC(){
    int arr[8] = {23,45,13,2,22,29,124,224};
    int size = sizeof(arr)/4;
    int largestNum = 0;
    int smallestNum = arr[0];

    //This Loops finds the largest Number in the array
    for (short int i = 0; i < size; i++)
    {
        if (arr[i] > largestNum){
            largestNum = arr[i];
        }
    }
    cout << "Largest Number in the Array is : " << largestNum << endl; 

    //This Loops finds the smallest Number in the array
    for (short int j = 0; j < size; j++)
    {
        if (arr[j] < smallestNum){
            smallestNum = arr[j];
        }
    }
    cout << "Smallest Number in the Array is : " << smallestNum << endl; 
}

///////////////////PASS BY REFERENCE||||| EXAMPLE
void doubleArray(int arr[], int size){
    for (short int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
    }
    
}

void funcD(){
    int size = 3;
    int arr[] = {10,20,30};
    //Before Doubling Array Values
    for (short int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    doubleArray(arr , size);

    //after Doubling Array Values
    for (short int j = 0; j < size; j++)
    {
        cout << arr[j] << endl;
    }
}

///////LINEAR SEARCH/////////
//Question - 02 Return the index value of the given data from the array
int indexReturn(int arr[] , int value ,int size){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value){
            return i;
        }
    }
    return 0;
}

void funcE(){
    int size = 4;
    int arr[size] = {10,20,44,22};
    cout << indexReturn(arr , 44 , size);
}

//Question -03 || Reverse an Array
void revArray(float arr[], int size){
    float second_array[size];
    for (short int i = 0; i < size; i++)
    {
        second_array[i] = arr[(size - i)-1];
    }
    for (int  i = 0; i < size; i++)
    {
        arr[i] = second_array[i];
    }
}

void funcF(){
    int size = 4;
    float arr[size] = {10,20,44,22};
    revArray(arr , size);
    for (int  i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

//Question - 04 || Print all the Unique Values in the Array
void funcG(){
    const int size = 10;
    int arr[size] = {23,45,13,2,22,29,124,224,2,23};
    for (short int i = 0; i < size; i++)
    {
    int indexCounter = 0;
        for (short int j = 0; j < size; j++)
        {
            if (i != j){
                if( arr[i] == arr[j]){
                    indexCounter++;
                }
            }
        }  
        if (indexCounter == 0){ //Matches only by himself
            cout << arr[i] <<endl;
        } 
    }
}

int main(){
    return 0;
}