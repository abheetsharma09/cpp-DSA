#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// LEETCODE QUESTION | 443. String Compression | SOLUTION
int compressString(){
    int count = 1;
    string resultVec;
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c', 'e'};

    for(int i=0; i < chars.size(); i++){
        char ch = chars[i];
        if(i < chars.size() - 1 && ch == chars[i+1]){
            count++;
        }else{
            if(count == 1){
                resultVec = resultVec + ch;
            }
            else{
                resultVec = resultVec + ch + to_string(count);
            }
            count =1;
        }
    }
    chars = {};
    for(int i =0; i< resultVec.length(); i++){
        chars.push_back(resultVec[i]);
    }

    return resultVec.length();
}

int main(){
    cout << compressString() << endl;
}