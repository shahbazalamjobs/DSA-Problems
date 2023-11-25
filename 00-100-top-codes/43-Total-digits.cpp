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
