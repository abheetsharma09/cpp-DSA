#include <iostream>
#include <string>
#include <unordered_map>
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
    string s1 = "ab";
    string s2 = "eidbaoaoo";
    if (s1.length() > s2.length()) {
        return false;
    }
    /*
   A std::multimap allows duplicate keys. It works by inserting a brand-new 
   key-value pair every time you "update" it, which would scale terribly 
   (causing O(N) lookups and massive memory bloat).
   */
    unordered_map<char, int> target;
    for(int i = 0; i < s1.length(); i++){
        // If key is missing, C++ auto-initializes it to 0, then adds 1
        target[s1[i]]++; // Automatically creates missing keys with value 0, then increments
    }

    // for(auto i : target){
    //     cout << i.first << " : " << i.second << endl;
    // }

    int s1_len = s1.length();
    for(int i = 0; i < (s2.length() - s1_len + 1); i++){
        unordered_map<char , int> window;
        for(int j = i;j < (i+s1_len);j++){
        // If key is missing, C++ auto-initializes it to 0, then adds 1
            window[s2[j]]++;
        }
        if(target == window){
            return true;
        }
    }
    return false;
}

int main(){
    permutationStringM2();
    return 0;
}