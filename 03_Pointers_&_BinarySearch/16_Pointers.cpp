#include <iostream>
#include <vector>
using namespace std;

//Memory Addresses - Stores as the hexadecimal value - [01234456789abcdef]
void memoryAddress(){
    int a = 10;
    cout << &a << endl; //Here this returns the address of a in the memory
}

void change(int* Pa){
    *(Pa) = 20;
}

//Pointers in C++ - Special Variable that stores the address of other variables
void Pointers(){
    //Variable Pointer
    int a = 100;
    int* Pa = &a; //Here we create a pointer that store the memory address of variable a
    //Pointers Pointer
    int** PerPa = &Pa;//Here we create a Pointer pointing to the Pointer of a

    //* is also a Deference Operator other than multiplication.
    cout << **(PerPa) << endl;

    //NULL POINTER
    int* nullPointer = NULL;
//PASS BY REFERENCEPinters
    // 1.> Pointers
    change(&a);
    cout << a << endl;
    // 2.> Alias (reference)

///////// ARRAY POINTERS ///////////
//We can't change the address of array and in array all items is the memory address pointing to the actuaol data
//Pointer Arithematics (pointer++;)
// pointer+ 1; add 1 int to the data(4bytes)
// pointer+ 3; subtract 3 int of the data(12bytes)
int arr[] = {2,5,3,6,9};
//cout
cout << *(arr) << endl;
cout << *(arr + 1) << endl;
cout << *(arr + 2) << endl;
cout << *(arr + 3) << endl;
cout << *(arr + 4) << endl;
//Pointer Arithematics (pointer --)
// 
////////// Subtract Pointers 
// By subtracting 2 pointers we can get the value of how much data can be stored b/w them

}

////// SO FAR WHAT LEARNT!! ///
/*
* = multiplication , derference
& = bitwise OR , memory address of a variable, alias
*/

int main(){
    memoryAddress();
    Pointers();
    return 0;
}