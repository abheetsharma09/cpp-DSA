#include <iostream>
#include <vector>
using namespace std;

///////////////// LEETCODE PROBLEM A ////////////////

//11. Container With Most Water
/*
///DESCRIPTION
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.
*/
///////EXAMPLE
/*
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
*/
//CODE SOLUTION
class Solution {
public:
    int maxArea(vector<int>& height) {
    int heightSize = height.size();
    //Pointers
    int Pi = 0;
    int Pj = heightSize-1;
    int area = 0;
    while (Pi < Pj){
        int width = Pj -Pi;
        int heightBar = min(height[Pi] , height[Pj]);
        if(height[Pi] < height[Pj]){
            area = max(area , heightBar *width);
            Pi++;
        }else if(height[Pi] > height[Pj]){
            area = max(area , heightBar *width);
            Pj--;
        }else if(height[Pi] == height[Pj]){
            area = max(area , heightBar *width);
            Pi++;
        }
    }
    return area;
    }
};
//EXPLANATION
/*
1. Why while (Pi < Pj) instead of a for loop?
>Dynamic Stopping Point.
>Prevents Crossing Over.
2. Why Pi++ in the == section?
Prevents Infinite Freezes
Forcing Progression
*/

//Question - 01 | Container with Most Water | Approach - 01 | Brute Force Approach
int Method01(vector<int> height){
    int area = 0;
    int heightLen = height.size();
    for(int i = 0; i < heightLen; i++){
        for(int j =0 ; j <heightLen; j++){
            if(i!=j && j > i){
                int length = min(height[i] , height[j]);
                area = max(area ,length * (j -i));
            }
        }
    }
    return area;
}

int Method02(vector<int> height){
    // Container Height = width(right height - left height) * length(min height bar decide the container area so we find the min)
    int heightSize = height.size();
    //Pointers
    int Pi = 0;
    int Pj = heightSize-1;
    int area = 0;
    while (Pi < Pj){
        int width = Pj -Pi;
        int heightBar = min(height[Pi] , height[Pj]);
        if(height[Pi] < height[Pj]){
            area = max(area , heightBar *width);
            Pi++;
        }else if(height[Pi] > height[Pj]){
            area = max(area , heightBar *width);
            Pj--;
        }else if(height[Pi] == height[Pj]){
            area = max(area , heightBar *width);
            Pi++;
        }
    }
    return area;
}

int main(){
    vector<int> a = {1,3,2,5,25,24,5};
    cout << Method02(a);
    return 0;
}