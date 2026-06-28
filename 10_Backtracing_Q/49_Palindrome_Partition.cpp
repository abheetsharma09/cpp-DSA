#include <iostream>
#include <string>
#include <vector>
using namespace std;

// LEETCODE PROBLEM | 131. PALINDROME PARTITION
//palindrome is a word which is equal when we read from backward and forward
bool isPalindrome(string part){
    int i = 0;
    int j = part.size() -1;
    while(i <j){
        if (part[i] != part[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void getParts(string s ,vector<string>& part_s, vector<vector<string>> & masterAns){
    if(s.size() == 0){
        masterAns.push_back(part_s);
        return;
    }
    for(int i = 0; i< s.size();i++){
        string part = s.substr(0, i+1);
        if(isPalindrome(part)){
            part_s.push_back(part);
            getParts(s.substr(i +1) , part_s,masterAns);
            part_s.pop_back();
        }
    }
}
vector<vector<string>> partition(string s){
    vector<string> part_s;
    vector<vector<string>> masterAns;
    getParts(s ,part_s , masterAns);
    return masterAns;
}

int main(){
    partition("aab");
    return 0;
}