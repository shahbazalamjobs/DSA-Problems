#include <iostream>
#include <string>
using namespace std;

int countDigitOccurrences(int number, int digit) {
    int count = 0;

    // Convert number to string for easy digit extraction
    string numStr = to_string(number);

    // Iterate through each character in the string
    for (char ch : numStr) {
        // Convert character to integer
        int currentDigit = ch - '0';

        // Check if the current digit is equal to the target digit
        if (currentDigit == digit) {
            count++;
        }
    }

    return count;
}

int main() {
    int inputNumber, targetDigit;

    // Input number and digit from the user
    cout << "Enter a number: ";
    cin >> inputNumber;

    cout << "Enter the digit to count: ";
    cin >> targetDigit;

    // Call the function to count digit occurrences
    int occurrences = countDigitOccurrences(inputNumber, targetDigit);

    // Output the result
    cout << "The digit " << targetDigit << " occurs " << occurrences << " times in the number " << inputNumber << endl;

    return 0;
}
