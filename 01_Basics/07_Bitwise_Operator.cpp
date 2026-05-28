#include <iostream>
using namespace std;

// Bitwise Operator - Means Operations performed on the Binary Value

///////////////Bitwise &[Bitwise AND]
/*
0 & 0 = 0
0 & 1 = 0
1 & 0 = 0
1 & 1 = 1
*/
int funcA()
{
    int a = 4;
    int b = 8;
    cout << (a & b);
    return 0;
}

///////////////Bitwise |[Bitwise OR]
/*
0 | 0 = 0
0 | 1 = 1
1 | 0 = 1
1 | 1 = 1
*/
int funcB()
{
    int a = 4;
    int b = 8;
    cout << (a | b);
    return 0;
}

///////////////Bitwise ^[Bitwise XOR] [Exclusive OR]
/*
same = 0
different =1
*/
int funcC()
{
    int a = 3;
    int b = 7;
    cout << (a ^ b);
    return 0;
}

int funcD()
{
    ///////////////Bitwise<< [Bitwise Left Shift]
    /*
    4 << 1 
    In Memory the Left shift Operation goes like for example a<<b. SO, its like a * 2power b 
    */
    cout << (4 << 1) << endl;
    ///////////////Bitwise<< [Bitwise Right Shift]
    /*
    10 >> 2
    In Memory the Right shift Operation goes like for example a<<b. SO, its like a / 2power b 

    */
    cout << (10 >> 2);
    return 0;
}

////////////////////////SCOPE IN C++////////////////////////////////
/*
Types of scope 
1>. Global Scope = Variable set outside the main() function.
2>. Local Scope = Variable defined in functions, if else ,loops and {}.
*/

////////////////////BITWISE MODIFIER////////////////////////////////
/*Basically changing for the bigger value of data*/
int funcE(){
    cout << sizeof(int) << " " << "Bytes" << endl;
    cout << sizeof(long int) << " " << "Bytes" << endl;
    cout << sizeof(long long int) << " " << "Bytes" << endl;
    cout << sizeof(short int) << " " << "Bytes" << endl; //long long alone also means long long int
    cout << sizeof(int) << " " << "Bytes" << endl;
    //int variable is by default signed int means it can take both the value +ve and -ve
    cout << sizeof(unsigned int) << " " << "Bytes" << endl;//This only takes +ve value
    return 0;
}


int main()
{
    funcA();
    cout << endl;
    funcB();
    cout << endl;
    funcC();
    cout << endl;
    funcD();
    cout << endl;
    funcE();
    return 0;
}
