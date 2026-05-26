#include <iostream>
using namespace std;

//Those functions who return nothing they are started with void
void printHello(){
    cout << "Hello World\n";
}

//Int Function return integers bool return boolen and so on
int printNum(){
    return 3;
}

//Functions with Parameters
double sumNum(double a , double b){
    double s = a+b;
    return s;
}

//Function which return minimum of 2 number
double minNum(double a = 1, double b =1){
    if(a > b){
        return b;
    }else if(a <b){
        return a;
    }
    return 0;
}

//Function which return sum of 1 to n
int sum1toN(int n = 0){
    double result = 0;
    for (int i = 0; i != n+1; i++)
    {
        result += i;
    }
    return result;
}

//Calculate N Factorial
int factorial(int n){
    double result =1;
    for (int i =1; i != n+1; i++){
        result *= i;
    }
    return result;
}

//Sum of the Digits of the Number
int digitSum(int n){
    int num = n;
    int result = 0;
    while(num > 0){
        int divnum = num % 10;
        result += divnum;
        num = num /10;
    }
    return result;
}

int nCr(int n , int r){
    int A = factorial(n);
    int B = factorial(r);
    int C = factorial(n-r);

    return A/(B*C);
}

//Functions in Memory
// In memory data is stored in 2types Stack[Likewise book is stored 1 by1] and Heap
int main(){
    printHello();
    cout << printNum() << endl;
    cout << sumNum(5,8) << endl;
    cout << minNum(9, 78) << endl;
    cout << sum1toN(5) << endl;
    cout << factorial(4) << endl;
    cout << digitSum(898) << endl;
    cout << nCr(8,2);
    return 0;
}