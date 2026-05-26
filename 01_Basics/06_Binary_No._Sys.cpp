//////////////////////////Binary Number System//////////////////////////
#include <iostream>
using namespace std;
/*
Basically in this Lecture-06..We understand how to do interconversion b/w
Decimal Number System[0 to 9] & Binary Number System[Binary Means only 0 & 1]
*/

/*
Computer Uses and only Understand Binary Number System[0 & 1]
*/

/////////Decimal to Binary 
/* 
Lets say if we want to convert 50 in the Binary Number System. 
SO we have to do the repetative devision of 50 by 2. and see the remainder.it may be 0 or 1 &
then multiply it with the power of 10 ^ 0,1,2,3,4 while the loop and then sum
*/

int decimal2binary(int n){
    int number = n;
    int result = 0;
    int power = 1;

    while(number != 0){
        int rem_pow = power * (number % 2);
        result += rem_pow;
        number = number/2; 
        power = power * 10;
    }
    return result;
}

/////////Binary to Decimal
/* 
Lets say if we want to convert 110010 in the Decimal Number System. 
SO we have to do the repetative devision of 110010 by 10 and see the remainder.it may be 0 or 1 &
then multiple it with the power of 2 ^ 0,1,2,3,4.... while the loop and then at last sum all
*/

int binary2decimal(int n){
    int number = n;
    int result = 0;
    int power = 1;

    while(number != 0){
        int rem_pow = power * (number % 10);
        result += rem_pow;
        number = number/10; 
        power = power * 2;
    }
    return result;
}

int main(){
    cout << decimal2binary(50) << endl;
    cout << binary2decimal(110010) <<endl;
    return 0;
}