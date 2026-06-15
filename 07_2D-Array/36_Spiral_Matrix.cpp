#include <iostream>
#include <vector>
using namespace std;


//////// LEETCODE PROBLEM - 54. Spiral Matrix ///////////
vector<int> spiralMatrix(vector<vector<int>> matrix){
    // Edge case check for empty input
    if (matrix.empty() || matrix[0].empty()) return {};

    vector<int> result_lst {};
    int rows = matrix.size();
    int coloums = matrix[0].size();
    int totalSize = rows * coloums;

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = coloums - 1;

    while (result_lst.size() < totalSize){
        // 1. TOP Layer: Left to Right
        for(int i = left; i <= right && result_lst.size() < totalSize; i++){
            result_lst.push_back(matrix[top][i]); // FIX: Use 'top' instead of '0'
        }
        top++;

        // 2. RIGHT Layer: Top to Bottom
        for(int i = top; i <= bottom && result_lst.size() < totalSize; i++){
            result_lst.push_back(matrix[i][right]);
        }
        right--;

        // 3. BOTTOM Layer: Right to Left
        for(int i = right; i >= left && result_lst.size() < totalSize; i--){
            result_lst.push_back(matrix[bottom][i]);
        }
        bottom--;

        // 4. LEFT Layer: Bottom to Top
        for(int i = bottom; i >= top && result_lst.size() < totalSize; i--){
            result_lst.push_back(matrix[i][left]);
        }
        left++; 
    }
    return result_lst;
}


///// I FIRST WROTE THE QUOTE IN PYTHON ///////////////
/*
def spiralOrder(matrix):
    if not matrix:
        return []
        
    result_lst = []
    rows = len(matrix)
    column = len(matrix[0])
    total_elements = rows * column
    
    top = 0
    bottom = rows - 1
    left = 0
    right = column - 1
    
    # FIX: The while loop stops exactly when we have collected all elements
    while len(result_lst) < total_elements:
        
        # 1. TOP Layer: Left to Right
        for i in range(left, right + 1):
            result_lst.append(matrix[top][i])
        top += 1 # Top layer is done, move the boundary down
        
        # 2. RIGHT Layer: Top to Bottom
        # Safety check: ensure we still have elements left to read
        if len(result_lst) < total_elements:
            for i in range(top, bottom + 1):
                result_lst.append(matrix[i][right])
            right -= 1 # Right layer is done, move the boundary left
            
        # 3. BOTTOM Layer: Right to Left
        if len(result_lst) < total_elements:
            for i in range(right, left - 1, -1):
                result_lst.append(matrix[bottom][i])
            bottom -= 1 # Bottom layer is done, move the boundary up
            
        # 4. LEFT Layer: Bottom to Top
        if len(result_lst) < total_elements:
            for i in range(bottom, top - 1, -1):
                result_lst.append(matrix[i][left])
            left += 1 # Left layer is done, move the boundary right

    return result_lst

# Test Example
matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
print(spiralOrder(matrix))
# Output: [1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7]
*/

int main(){
    return 0;
}