#include <iostream>
using namespace std;

//Bitwise Operator - Means Operations performed on the Binary Value

///////////////Bitwise &[Bitwise AND]
/* 
0 & 0 = 0
0 & 1 = 0
1 & 0 = 0
1 & 1 = 1
*/
int funcA(){
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
int funcB(){
    int a = 4;
    int b = 8;
    cout << (a|b);
    return 0;
}
///////////////Bitwise ^[Bitwise XOR]
/* 
same = 0
different =1
*/
int main(){funcA(); funcB(); return 0;}
