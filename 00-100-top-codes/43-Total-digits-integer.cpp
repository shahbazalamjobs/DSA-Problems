// 1. ----------------- Simple log formula -------------------

#include <iostream>
#include <cmath> // for log10
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int digitCount;

    if (num == 0) {
        digitCount = 1;
    } else {
        digitCount = log10(num) + 1;
    }

    cout << "Number of digits: " << digitCount << endl;

    return 0;
}


// 2. ----------------  using while loop ------------------

#include <iostream>
using namespace std;

int main() {
    long long number;
    int count = 0;

    cout << "Enter a number: ";
    cin >> number;

    // Handle negative numbers
    if (number < 0) {
        number = -number;
    }

    // Count the digits using a while loop
    while (number != 0) {
        number /= 10;
        count++;
    }

    cout << "Number of digits: " << count << endl;

    return 0;
}
