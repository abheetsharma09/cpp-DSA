#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// LEETCODE PROBLEM // 567. Permutation in String | Not Optimal Approach
bool permutationStringM1(){
    string s1 = "dinitrophenylhydrazine";
    string s2 = "acetylphenylhydrazine";
    sort(s1.begin(), s1.end()); 
    do {
        if(s2.find(s1) != string::npos){
            return true;
        }
    } while (next_permutation(s1.begin(), s1.end()));

    return false;
}

// LEETCODE PROBLEM // 567. Permutation in String | Optimal Approach
/*
// SLIDING WINDOW APPROACH
1-> First we store the frequency of the string that we want to find in another string.
2-> Comapre it using the per window and window size is equal to the string that search in the string
*/
bool permutationStringM2(){
    return false;
}

int main(){
    permutationStringM1();
    return 0;
}