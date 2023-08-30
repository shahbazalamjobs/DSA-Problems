// Binary to decimal conversion in C++

/*
Binary to decimal conversion in C++
Binary Numbers are used by computers to do almost all operations. We will look at how Binary to decimal conversion in C++ works.

Ex:-  (11011)2 = 1 * 24 + 1 * 23 + 0 * 22 + 1 * 21 + 2 * 20
               = 16 + 8 + 0 + 2 + 1
               = (27)10
*/

// 1.  O(log n)
#include <iostream>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(int n)    // long long n will be better
{
	int num = n;
	int dec_value = 0;

	// Initializing base value to 1, i.e 2^0
	int base = 1;

	int temp = num;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;
		dec_value += last_digit * base;
		base = base * 2;
	}

	return dec_value;
}

int main()
{
	int num = 10101001;    // long long num will be better bcoz binary no. are usually large.
	cout << binaryToDecimal(num) << endl;
}

// 2. 

// Program to convert binary to decimal when input is represented as binary string.
#include <iostream>
#include <string>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(string n)
{
	string num = n;
	int dec_value = 0;

	// Initializing base value to 1, i.e 2^0
	int base = 1;

	int len = num.length();
	for (int i = len - 1; i >= 0; i--) {
		if (num[i] == '1')
			dec_value += base;
		base = base * 2;
	}

	return dec_value;
}

int main()
{
	string num = "10101001";
	cout << binaryToDecimal(num) << endl;
}
