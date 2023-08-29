
// 1. Iterative

#include <iostream>
using namespace std;

int factorialIterative(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cin >> num;
    cout << "Factorial of " << num << ": "  << factorialIterative(num) << endl;
    return 0;
}


// 2. recursive

#include <iostream>
using namespace std;

int factorialRecursive(int n) {
    if (n <= 1)
        return 1;
    return n * factorialRecursive(n - 1);
}

int main() {
    int num; 
    cin >> num;
    cout << "Factorial of " << num << ": " << factorialRecursive(num) << endl;
    return 0;
}
