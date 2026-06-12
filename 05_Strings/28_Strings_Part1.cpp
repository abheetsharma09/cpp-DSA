#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;

void stringP1(){
    char str1[] = "ABHEET";
    char str2[] = {'a' , 'b' , 'c' , '\0'}; // '\0' NULL end char
    string str3 = "abheetsharma09"; // Resized at run time
    string str4 = "+github";
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    //CONCATINATION
    cout << str3 + str4 << endl;
    //ITERATION
    for(int i = 0; i < str3.length(); i++){
        cout << str3[i] << " ";
    }

    //REVERSE A STRING //LEETCODE QUESTION 344 /////////////////////////////

    cout << endl;
    int i = 0;
    int j = str3.length() -1;
    while(i <= j){
        swap(str3[i] , str3[j]);
        i++;
        j--;
    }
    for(int i = 0; i < str3.length(); i++){
        cout << str3[i] << " ";
    }

    //REVERSE A STRING VOWELS //LEETCODE QUESTION 345 ///////////////////////////////

    string s = "IceCreAm";
    cout<< endl << s << endl;
    int s_i = 0;
    int s_j = s.length() -1;
    // vector<char> s_char = {'a', 'e', 'i', 'o', 'u' , 'A' ,'E' , 'I' , 'O' , 'U'};
    while(s_i <= s_j){
        if(s[s_i] == 'a' || s[s_i] == 'e' || s[s_i] == 'i' ||
        s[s_i] == 'o' || s[s_i] == 'u' ||
        s[s_i] == 'A' || s[s_i] == 'E' || s[s_i] == 'I' ||
        s[s_i] == 'O' || s[s_i] == 'U'){
            if(s[s_j] == 'a' || s[s_j] == 'e' || s[s_j] == 'i' ||
            s[s_j] == 'o' || s[s_j] == 'u' ||
            s[s_j] == 'A' || s[s_j] == 'E' || s[s_j] == 'I' ||
            s[s_j] == 'O' || s[s_j] == 'U'){
                swap(s[s_i] , s[s_j]);
                s_i++;
                s_j--;
            }else{
                s_j--;
            }
        }else{
            s_i++;
        }

    }
    cout << s << endl;
}


int main(){
    stringP1();
    return 0;
}