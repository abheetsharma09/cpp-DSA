#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

bool isValid(char val){
    if (!isalnum(val)) {
        return true; 
    }
    return false;
}

string reverseWordsinString(){
    string s = "the sky is blue";
    string result = "";
    vector<string> tempVec;
    string tempResult = "";

    for(int i = 0;i < s.length(); i++){
        if(isValid(s[i]) == false){
            tempResult = tempResult + s[i];
        }else{
            if(tempResult.length() != 0){
                tempVec.push_back(tempResult);
                tempResult = "";
            }
        }        
    }
    if(tempResult.length() != 0){
        tempVec.push_back(tempResult);
        tempResult = "";
    }
    if (tempVec.empty()) {
        return "";
    }
    for(int i = tempVec.size()-1; i >= 0;i--){
        if (i == 0) {
            result = result + tempVec[i];
        }else{
            result = result+ tempVec[i] + " ";
        }
    }
    return result;
}


int main(){
    cout << reverseWordsinString() << endl;
    return 0;
}