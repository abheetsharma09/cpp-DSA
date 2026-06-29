#include <iostream>
#include <vector>

using namespace std;
////////// Count Inversion Condition ////////////

// if (arr[i],arr[j]) is a pair then,
/*
    i < {j & j are indexes here}
    arr[i] > arr[j]
*/

// Brute Force Method
int bruteMethod(vector<int> & arr)
{
    int result=0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (i < j && arr[i] > arr[j])
            {
                result++;
            }
        }
    }
    return result;
}

int merge(vector<int> & arr, int st, int mid, int end)
{
    int result = 0;
    vector<int> tempArr;
    int i = st;
    int j = mid+1;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            tempArr.push_back(arr[i]);
            i++;
        }
        else
        {
            tempArr.push_back(arr[j]);
            j++;
            result += (mid - i + 1);
        }
    }

    while (i <= mid)
    {
        tempArr.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        tempArr.push_back(arr[j]);
        j++;
    }

    for (int idx = 0; idx < tempArr.size(); idx++)
    {
        arr[idx + st] = tempArr[idx];
    }
    return result;
}

int optimalMethod(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end)/2;

        int L = optimalMethod(arr, start, mid); // left
        int R = optimalMethod(arr, mid+1, end);       // right

        int mis = merge(arr, start, mid, end); // backtracking
        return L + R + mis;
    }
    return 0;
}
int main()
{
    vector<int> arr = {1, 2, 3, 34, 4, 56};
    int start = 0;
    int end = arr.size() - 1;
    cout << bruteMethod(arr) << endl;
    cout << optimalMethod(arr, start, end) << endl;
    return 0;
}
