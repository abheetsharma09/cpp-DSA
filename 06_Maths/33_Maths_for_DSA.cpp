#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// LEETCODE PROBLEM 204
int countPrimes(int n){
    // FOR INSTANCE USE I WRITE THIS IN PYTHON | NOT OPTIMAL | WITH TEL BUG
    /*
    def countPrime(n = 30):
    val = list(range(2,n))
    count = 0
    while count < len(val):
        inc = 2
        tempVal = val[count] * inc
        while tempVal < n:
            if tempVal in val:
                position = val.index(tempVal)
                del val[position]
            tempVal = val[count] * inc
            inc+=1
        count+=1
    return len(val)

    countPrime()
    */
   vector<bool> vecArr(n , true);
   int count =0;
    for(int i =2; i <n; i++){
        if(vecArr[i]){
            count++;
            for(int j = i*2; j< n;j=j+i){// Here j=j+i used to increament value as per his multiple
                vecArr[j] = false;
            }
        }
    }
    return count;
}

int digitsINnum(int n = 3856){
    vector<int> nums;
    while(n > 0){
        int currNUM = n % 10;
        nums.push_back(currNUM);
        n = n/10;
    }

    for(int i : nums){
        cout << i<< endl;
    }
    return 0;
}

bool armsStrongDigit(int n){
    int nums = n;
    int totalSUM = 0;
    while(nums > 0){
        int currNUM = nums % 10;
        totalSUM = totalSUM + (currNUM * currNUM * currNUM);
        nums = nums/10;
    }
    if(totalSUM == n){
        return true;
    }
    return false;
}

int hcf(int n1,int n2){
    int hcf =1;
    for(int i=1; i < min(n1,n2); i++){
        if(n1%i ==0 && n2%i==0){
            hcf = i;
        }
    }
    return hcf;
}

int euclidAlgo(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a>b){
        return hcf(a-b,b);
    }else if(a<b){
        return hcf(a,b-a);
    }
    return 0;
}

int lcm(int a , int b){
    return (a*b)/euclidAlgo(a,b);
}

int reverseM1(int x = 3876){ //NOT OPTIMAL METHOD FOR LEETCODE QUESTION 7
    if(x >= INT_MIN && x <= INT_MAX) {
        string n_str = to_string(x);
        int i = 0;
        int j = n_str.length()-1;
        while(i<= j){
            swap(n_str[i] , n_str[j]);
            i++;
            j--;
        }
        if(x < 0){
            return 0-(stoi(n_str));
        }
        return stoi(n_str);
    }
    return 0;
}

int reverseM2(int x = -3876){
    long long result = 0;
    while (x != 0) {
        int currNum = x % 10; // Naturally preserves negative signs (e.g., -123 % 10 = -3)
        
        // 2. Shift the existing digits to the left and append the new digit
        result = (result * 10) + currNum;
        
        x = x / 10; // Automatically moves towards 0 for both positive and negative bounds
    }
    
    // 3. Check for 32-bit signed integer overflow boundaries [-2^31, 2^31 - 1]
    if (result < INT_MIN || result > INT_MAX) {
        return 0;
    }
    
    return (int)result;
}

bool ifPalindrome(int n){
    if(reverseM2(n) == n){
        return true;
    }
    return false;
}
int main(){
    // cout << countPrimes(30);
    // digitsINnum();
    // cout << armsStrongDigit(151);
    cout << reverseM2();

    return 0;
}