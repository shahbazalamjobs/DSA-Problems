//  Count the number of days in a given month of a year:

#include <iostream>
using namespace std;

int main() {
    int year, month;

    // Input year and month from the user
    cout << "Enter the year: ";
    cin >> year;

    cout << "Enter the month (1-12): ";
    cin >> month;

    // Check if the year and month are valid
    if (year < 0 || month < 1 || month > 12) {
        cout << "Invalid input. Please enter a valid year and month." << endl;
        return 1;
    }

    // Determine the number of days in the given month
    int daysInMonth;

    if (month == 2) {
        // Check for leap year for February
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth = 29;
        } else {
            daysInMonth = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }

    // Output the result
    cout << "Number of days in the given month: " << daysInMonth << endl;

    return 0;
}
