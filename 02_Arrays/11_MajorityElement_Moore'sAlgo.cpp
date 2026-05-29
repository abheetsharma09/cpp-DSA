#include <iostream>
#include <vector>
using namespace std;

// Question - 01 | Pair Sum | Here we use the Brute Force Approach
// Returns pair in sorted array with target sum
vector<int> PairSumM1(vector<int> mainArr, int targetSum){
    vector<int> ans; // Blank Vector
    int mainArrLen = mainArr.size();
    for (short int i = 0; i < mainArrLen; i++){
        for (short int j = 0; j < mainArrLen; j++){
            if (i != j){
                int testSum = mainArr[i] + mainArr[j];
                if (testSum == targetSum){
                    // std::cout << "[" << mainArr[i] << "," << mainArr[j] << "]" << endl;
                    ans.push_back(mainArr[i]);
                    ans.push_back(mainArr[j]);
                }
            }
        }
    }
    return ans;
}

// Same Question with Different Approach - Now we use the feature Sorted array[means either asending or desending]
// This Approach actually help in reducing overall runtime.
vector<int> pairSumM2(vector<int> mainArr, int targetSum){
    vector<int> ans;                 // Blank Vector
    int mainArrLen = mainArr.size(); // Vector array Length
    // Pointers Variable
    int Pi = 0;
    int Pj = mainArrLen - 1;

    for (short int i = 0; i < mainArrLen; i++){
        if (Pi != Pj){
            int pairSum = mainArr[Pi] + mainArr[Pj];
            if (pairSum == targetSum){
                    ans.push_back(mainArr[Pi]);
                    ans.push_back(mainArr[Pj]);
                    return ans;
            }else if (pairSum > targetSum){
                Pj--;
            }else if (pairSum < targetSum){
                Pi ++;
            }
        }
    }
    return ans;
}

// Question -02 | Majority Element | Brute Force Approach
int majorityElementM1(vector<int> mainArr){
    int mainArrLen = mainArr.size(); //Size of array
    int result =0;
    int mjElement = mainArrLen/2;

    for (short int i = 0; i < mainArrLen; i++){
        int count = 1;
        for(short int j = 0; j < mainArrLen; j++){
            if (i!=j){
                if(mainArr[i] == mainArr[j]){
                    count = count +1;
                }
            }
        }
        if (count > mjElement){
            result = mainArr[i];
        }else{
            count = 1;
        }
    }
    if (result == 0 ){
        cout << "No Unique Character";
    }
    return result;
}

// Question -02 | Majority Element | Approach -02 | Moore's Voting Algorithm
//Here we use this same approach to solve the Leetcode Problem 
//169. Majority Element
int majorityElementM2(vector<int> mainArr){
    int result =0;
    int count = 0;
    int mainArrLen = mainArr.size(); //Size of array
    int mjElement = mainArrLen/2;

    for(int i =0; i < mainArrLen; i++){
        if(count ==0){
            result = mainArr[i];
        }
        if(result == mainArr[i]){
            count++;
        }else{
            count--;
        }
    }
    return result;
}

int main()
{
    // Question -01 //Function Call | Approach 01
    vector<int> mainArr = {2, 7, 11, 15 ,15};
    vector<int> ans01 = PairSumM1(mainArr , 22);
    std::cout << "[" << ans01[0] << "," << ans01[1] << "]" << endl;

    // Question -01 //Function Call | Approach 02
    vector<int> ans02 = pairSumM2(mainArr, 9);
    std::cout << "[" << ans02[0] << "," << ans02[1] << "]" << endl;

    // Question -02 //Function Call | Approach 01
    vector<int> mainArr02 = {3,3,4};
    int ans03 = majorityElementM1(mainArr02);
    std::cout << ans03 << endl;

    // Question -02 //Function Call | Approach 02
    int ans04 = majorityElementM2(mainArr02);
    std::cout << ans04 << endl;

    return 0;
}