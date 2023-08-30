// Octal to Decimal Conversion in C++

/*

Here, on this page, we will discuss octal to decimal conversion in C++. Let’s have a look at an example before moving ahead with code of Octal to Decimal in C++.

(462)8 = 4 * 8^2 + 6 * 8^1 + 2 * 8^0
256 + 48 + 2 = (306)10

*/

// 1. C++ program to convert octal to decimal :   O(logN)
#include <iostream>
using namespace std;

// Function to convert octal to decimal
int octalToDecimal(int n)
{
	int num = n;
	int dec_value = 0;

	// Initializing base value to 1, i.e 8^0
	int base = 1;

	int temp = num;
	while (temp) {

		// Extracting last digit
		int last_digit = temp % 10;
		temp = temp / 10;

		// Multiplying last digit with appropriate
		// base value and adding it to dec_value
		dec_value += last_digit * base;

		base = base * 8;
	}

	return dec_value;
}

// Driver program to test above function
int main()
{
	int num = 67;

	cout << octalToDecimal(num) << endl;
}


// 2. C++ program to convert octal to decimal
#include <iostream>
using namespace std;
int OctToDec(string n)
{
return stoi(n, 0, 8);
}
int main()
{

string n = "67";
cout << OctToDec(n);
return 0;
}

// 3. Recursion : O(log n)
#include <iostream>
using namespace std;

int octal_to_decimal(int octal) {
	if (octal == 0) {
		return 0;
	} else {
		return (octal % 10) + 8 * octal_to_decimal(octal / 10);
	}
}

int main() {
	int octal = 67;
	cout << octal_to_decimal(octal) << endl;
	return 0;
}
