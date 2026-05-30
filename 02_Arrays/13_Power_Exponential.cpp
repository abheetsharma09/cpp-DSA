#include <iostream>
#include <vector>
using namespace std;

//Decimal to Binary
vector<int> decimal2binary(int n){
    if (n < 0){
        n = (n + (n * -2));
    }
    vector<int> resultArr;
    int result = 0;
    int power = 1;

    while(n != 0){ //Converts the NUmber to Binary
        int rem_pow = power * (n % 2);
        result += rem_pow;
        n = n/2; 
        power = power * 10;
    }

    while (result != 0){ //Converts Number to digit 1 by 1
        int appendData = result %10;
        resultArr.push_back(appendData);
        result = result/10;
    }

    return resultArr;
}

// Question -01 | Approach -01 | Brute Force Approach for Power Exponential
double Method01(double n , int p){
    if (p <0){
        n= 1/n;
        p = p + (p * -2);
    }
    double result = 1;
    for(int i = 0 ;i < p; i++){
        result = result * n;
    }
    return result;
}

// Question -01 | Approach -02 | Binary Exponentiation | Optimal Approach but fails on large values
double Method02(double n , int p){
    if (p < 0){
        n = 1/n;
    }
    double result = 1;
    double power =n;
    vector<int> binaryNum = decimal2binary(p);
    for (short int i :binaryNum){
        if(i == 1){
            result = result * power;
        }
        power = power * power;
    }
    return result;
}

// Question -01 | Approach -03 | Binary Exponentiation | Most Optimal Approach
double Method03(double x, int n){
    long long int power = n;
    if (power <0){
        x= 1/x;
        power = power + (power * -2);
    }
    double result = 1;
    double number =x;
    //Decimal to Binary
    while (power != 0){
        if(power % 2 == 1){
            result = result * number;
        }
        power = power/2;
        number = number * number;
    }
    return result;
}


/////////////////////// LEETCODE PROBLEM [A] /////////////////
//50. Pow(x, n)
/*
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

Example 1:
Input: x = 2.00000, n = 10
Output: 1024.00000

Example 2:
Input: x = 2.10000, n = 3
Output: 9.26100
*/
/////////////////////// SOLUTION //////////////////////////
/*
DESCRIPTION
Here,We have to find the exponential value of the given number.So, without 
going with the traditional method of multiple multiplication[because that 
can cause a linear time complexity and fails on big value]. We uses a method
called Binary Exponential now this reduce the iteration time & hence reduce 
the runtime by (logn).
*/
/*
STEP 01 
Convert power value to binary.
STEP 02
If the digit places values are 1 then only multiply it with the power number.
*/
////SOLUTION CODE////
class Solution {
public:
    double myPow(double x, int n) {
    long long int power = n;
    if (power <0){
        x= 1/x;
        power = power + (power * -2);
    }
    double result = 1;
    double number =x;
    //Decimal to Binary
    while (power != 0){
        if(power % 2 == 1){
            result = result * number;
        }
        power = power/2;
        number = number * number;
    }
    return result;
    }
};

//////////////////// LEETCODE PROBLEM [B] /////////////////
//121. Best Time to Buy and Sell Stock
/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
*/

//////////// SOLUTION ///////////
/*
DESCRIPTION
Imagine every day[i] as a selling day and then go back to find the minimum price to buy the stock.
*/
////// CODE SOLUTION ////
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int currProfit = prices[0]; //7
        int pricesLen = prices.size();
        for(int i = 1; i < pricesLen; i++){
            if(prices[i] > maxProfit){
                maxProfit = max(maxProfit ,prices[i] - currProfit);
            }
            currProfit = min(currProfit , prices[i]);
        }
    return maxProfit;
    }
};

int main(){
    // cout << Method01(2 , 3) << endl;
    cout << Method03(2 , 3)<< endl;
    return 0;
}