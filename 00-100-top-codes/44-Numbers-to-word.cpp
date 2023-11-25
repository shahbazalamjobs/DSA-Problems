#include <iostream>
#include <string>
using namespace std;

string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
string teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

string convertToWords(int num) {
    if (num >= 1 && num <= 9) {
        return ones[num];
    } else if (num >= 11 && num <= 19) {
        return teens[num - 10];
    } else if (num >= 10 && num % 10 == 0) {
        return tens[num / 10];
    } else if (num >= 20 && num <= 99) {
        return tens[num / 10] + " " + ones[num % 10];
    } else if (num >= 100 && num <= 999) {
        return ones[num / 100] + " Hundred " + convertToWords(num % 100);
    } else if (num >= 1000 && num <= 9999) {
        return ones[num / 1000] + " Thousand " + convertToWords(num % 1000);
    } else {
        return "Invalid input";
    }
}

int main() {
    int num;
    cout << "Enter a number (1 to 9999): ";
    cin >> num;

    if (num >= 1 && num <= 9999) {
        string result = convertToWords(num);
        cout << "In words: " << result << endl;
    } else {
        cout << "Please enter a number between 1 and 9999." << endl;
    }

    return 0;
}
