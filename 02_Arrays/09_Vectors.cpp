#include <iostream>
#include <vector>
using namespace std;

/*
Vectors are just like array but they have a resize features.
*/

//////////////////////////////VECTOR SYNTAX
void funcA()
{
    vector<int> vec; // Empty Vector //Here "vec" is the name of the vector// type of data is int
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2(3, 0); // {0,0,0}

    // Loops on Vector
    for (int i : vec2)
    { // Here i directly stores the value of the vector array 1 by 1
        cout << i << endl;
    }
}

//////////////////////////////VECTOR FUNCTIONS
void funcB()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    // Size of Vector
    cout << "Size : " << vec.size() << endl; // Size 5

    // Add a Data in a Vector at Last
    vec.push_back(6);
    cout << "Size : " << vec.size() << endl; // Size 6

    // Delete the last value of the Vector
    vec.pop_back();

    // Return the Front(1st) value of the Vector
    cout << vec.front() << endl;

    // Return the Last value of the Vector
    cout << vec.back() << endl;
}

// A Leetcode Question - DONE
/*
136. Single Number
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
*/
int funcC()
{
    class Solution
    {
    public:
        int singleNumber(vector<int> &nums)
        {
            int result = 0;
            for (int val : nums)
            {
                result = result ^ val;
            }
            return result;
        }
    };
}

int main()
{
    return 0;
}