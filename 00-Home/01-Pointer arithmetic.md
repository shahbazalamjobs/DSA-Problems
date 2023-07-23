## Pointer Arithmetic

- To find the largest element in an array using recursion in C++, you can implement a recursive function that compares elements and keeps track of the largest value encountered so far. Here's a sample C++ code to achieve this:

```cpp
#include <iostream>
using namespace std;

// Recursive function to find the largest element in an array
int findLargestElement(int arr[], int n) {
    // Base case: If the array has only one element, it is the largest element
    if (n == 1)
        return arr[0];

    // Recursive case: Find the largest element in the rest of the array
    int subArrayMax = findLargestElement(arr + 1, n - 1);

    // Compare the largest element found in the subarray with the current element
    return max(arr[0], subArrayMax);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int largestElement = findLargestElement(arr, n);
    cout << "The largest element in the array is: " << largestElement << endl;

    return 0;
}
```

- In this code, the `findLargestElement` function takes an array `arr` and the size of the array `n`. 
- It uses recursion to find the largest element in the array by dividing the problem into a smaller subproblem. 
- The base case is when the array contains only one element, in which case that element is considered the largest. 
- In the recursive case, the function finds the largest element in the rest of the array (excluding the first element) and compares it with the first element to find the overall largest element.

```cpp
int subArrayMax = findLargestElement(arr + 1, n - 1);
```

- The statement is a recursive function call to `findLargestElement`, which is used to find the largest element in a subarray.
1. `arr + 1`: This part is pointer arithmetic and it effectively creates a pointer to the second element of the original array `arr`. When you add 1 to the pointer, it moves forward by one element's size. So, `arr + 1` points to the second element of the array `arr`.

2. `n - 1`: This is the size of the subarray. When the recursive function is called, we pass the size of the subarray, which is one less than the size of the original array. Since we are moving to the second element of the array (using `arr + 1`), the size of the subarray will be one less (`n - 1`).

So, the recursive function call `findLargestElement(arr + 1, n - 1)` is asking to find the largest element in the subarray starting from the second element of the original array (`arr + 1`) with a size of `n - 1`.

The reason for the recursive call is that the largest element of the whole array can be determined by comparing the first element (`arr[0]`) with the largest element of the subarray (`subArrayMax`). The `findLargestElement` function uses recursion to break down the problem into smaller subproblems until the base case (array with only one element) is reached, and then it returns the largest element of that subarray.

This approach allows the function to find the largest element of the entire array by repeatedly comparing elements in a divide-and-conquer manner.
