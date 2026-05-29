#include <iostream>
using namespace std;

// =========================================================================
// SECTION 1: 6 TIME COMPLEXITY CLASSES
// =========================================================================

// 1. O(1) - Constant Time
// The number of operations remains exactly the same, regardless of input size.
void constantTime_Demo(int arr[], int size) {
    if (size > 0) {
        int element = arr[0]; // 1 execution step
        cout << "[O(1) Time] Element at first index: " << element << "\n";
    }
}

// 2. O(log n) - Logarithmic Time
// The input size 'n' is divided by a constant factor (usually 2) in every loop step.
void logarithmicTime_Demo(int n) {
    cout << "[O(log n) Time] Steps for n = " << n << ": ";
    while (n > 0) {
        cout << n << " ";
        n = n / 2; // Cuts the problem size in half each iteration
    }
    cout << "\n";
}

// 3. O(n) - Linear Time
// The number of operations grows sequentially 1-to-1 with the input size 'n'.
// Common in algorithms like Linear Search or simple array traversals.
void linearTime_Demo(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Runs exactly 'n' times
    }
    cout << "[O(n) Time] Sum of array: " << sum << "\n";
}

// 4. O(n log n) - Linearithmic Time
// An O(log n) operation nested inside an O(n) loop. 
// Common in efficient sorting algorithms like Merge Sort and Quick Sort.
void linearithmicTime_Demo(int n) {
    cout << "[O(n log n) Time] Running an outer loop 'n' times with an inner dividing loop:\n";
    for (int i = 1; i <= n; i++) {
        int temp = n;
        while (temp > 0) {
            temp = temp / 2; // Runs log(n) times for each 'i'
        }
    }
    cout << "[O(n log n) Time] Completed execution.\n";
}

// 5. O(n^2) - Quadratic Time
// Nested loops where the inner loop runs 'n' times for every single iteration of the outer loop.
// Common in brute-force calculations, Bubble Sort, Selection Sort.
void quadraticTime_Demo(int n) {
    cout << "[O(n^2) Time] Nested loops executing grid-style:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "(" << i << "," << j << ") "; // Runs n * n times
        }
    }
    cout << "\n";
}

// 6. O(2^n) - Exponential Time
// The growth rate doubles with each addition to the input dataset.
// Common in naive recursive solutions, such as calculating the nth Fibonacci number recursively.
int exponentialTime_Fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    // Each call branches into 2 deeper calls, causing exponential tree growth
    return exponentialTime_Fibonacci(n - 1) + exponentialTime_Fibonacci(n - 2);
}


// =========================================================================
// SECTION 2: 2 SPACE COMPLEXITY CLASSES
// =========================================================================

// 1. O(1) - Constant Space
// Memory consumption stays fixed. No new variables are created when 'n' scales up.
void constantSpace_Demo(int n) {
    int sum = 0; // Fixed memory allocation slot 1
    int multiplier = 5; // Fixed memory allocation slot 2

    for (int i = 1; i <= n; i++) {
        sum += (i * multiplier);
    }
    cout << "[O(1) Space] Computed sum without allocating extra variable slots: " << sum << "\n";
}

// 2. O(n) - Linear Space
// Memory consumption grows 1-to-1 with input size 'n'. 
// Creates extra storage blocks proportional to the size of the data passed.
void linearSpace_Demo(int n) {
    // Allocates a built-in array container directly inside memory of size 'n'
    int extraMemoryGrid[n]; 

    for (int i = 0; i < n; i++) {
        extraMemoryGrid[i] = i * 2;
    }
    cout << "[O(n) Space] Allocated an extra array buffer block of size: " << n << "\n";
}

int main() {
    cout << "=== ALL 6 TIME AND 2 SPACE COMPLEXITY CLASSES ===\n\n";

    int sampleArray[5] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << "--- 1. TIME COMPLEXITY TESTS ---\n";
    constantTime_Demo(sampleArray, size);
    cout << "\n";

    logarithmicTime_Demo(16);
    cout << "\n";

    linearTime_Demo(sampleArray, size);
    cout << "\n";

    linearithmicTime_Demo(4);
    cout << "\n";

    quadraticTime_Demo(3);
    cout << "\n";

    int fibResult = exponentialTime_Fibonacci(5); 
    cout << "[O(2^n) Time] Recursive Fibonacci result for n=5 is: " << fibResult << "\n";
    cout << "\n";

    cout << "--- 2. SPACE COMPLEXITY TESTS ---\n";
    constantSpace_Demo(10);
    cout << "\n";

    linearSpace_Demo(5);

    return 0;
}