// Fnd the number of times a specific digit occurs in a given input

// 1 ----------------------------

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


// 2. -----------------------------------


#include <iostream>
using namespace std;

int countDigitOccurrences(int number, int digit) {
    int count = 0;

    // Iterate through each digit of the number
    while (number != 0) {
        int currentDigit = number % 10;

        // Check if the current digit is equal to the target digit
        if (currentDigit == digit) {
            count++;
        }

        // Remove the last digit from the number
        number /= 10;
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
