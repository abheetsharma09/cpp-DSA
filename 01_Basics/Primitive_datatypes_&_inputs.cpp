#include <iostream>
using namespace std;

int main(){
    //Primitive (Built-in) Data Types in C++
    int age = 12; //4 bytes
    char bloodgroup = 'B'; //1 byte
    bool isAdult = false; // Return 0 as false and 1 as true //1byte
    double totalnum = 599.99f; //8 bytes
    float percentage = 99.9f; //4bytes
    cout << age << "\n" << bloodgroup << "\n" << isAdult << "\n" << totalnum << "\n" << percentage;

    //Type Casting - Converting one data type to another
    //1.> Conversion - It is a Implicit Processs means done by compiler.[small value to big value]
    char grade = 'A';
    int num = grade;
    cout << num << endl;

    //2.> Casting - It is an explicit process. Done by coder. [big value to small value]
    //When we try to convert 100.99999999999 or 100.1 in int it gives always 100..
    double price = 100.99;
    int newPrice = (int)price;
    cout << newPrice;

    int new_age;
    cout << "Enter your Age: ";
    cin >> new_age;

    //Logical Operators 
    // AND &&  
    // OR ||
    // NOT !

    //PROJECT - Sum of 2numbers
    cout << "\nPROJECT - Sum of 2 Numbers\n";
    int num1;
    int num2;
    cout << "Enter Number1 : ";
    cin >> num1;
    cout << "Enter Number2 : ";
    cin >> num2;
    int newNum = num1+num2;
    cout << "SUM = " << newNum << endl;
    cout << newNum++;

    //Unary Operators
    //1.> Increment ++
    //2.> Decrement --
    return 0;
}

