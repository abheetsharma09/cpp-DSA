#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
What is a Valid Palindrome??
When we read a number from left to right and right to left it must be same.
*/
bool isAlphaNum(char num){
    if((num >= '0' && num <= '9') || (tolower(num) >= 'a' && tolower(num) <= 'z')){
        return true;
    }
    return false;
}

bool validPalindrome(){
    string s = "car";
    int i = 0;
    int j = s.length()-1;
    while(i <= j){
        if(isAlphaNum(s[i]) == false){
            i++;
            continue;
        }
        if(isAlphaNum(s[j]) == false){
            j--;
            continue;
        }
        if(tolower(s[i]) == tolower(s[j])){
            i++;
            j--;
        }else{
            return false;
        }
    }
    return true;
}

// LEETCODE QUESTION // 1910. Remove All Occurrences of a Substring ///

string removeOccurence(){
    string s = "axxxxyyyyb";
    string part = "xy";
    int pos = s.find(part);
    while(pos != std::string::npos){
        s = s.erase(pos, part.length());
        pos = s.find(part);
    }
    return s;
}



int main(){
    cout << removeOccurence() << endl;
    // removeOccurence();
    return 0;
}