// Program for Decimal to Binary Conversion 
/* 
If the decimal number is 10. 
Step 1: Remainder when 10 is divided by 2 is zero. Therefore, arr[0] = 0. 
Step 2: Divide 10 by 2. New number is 10/2 = 5. 
Step 3: Remainder when 5 is divided by 2 is 1. Therefore, arr[1] = 1. 
Step 4: Divide 5 by 2. New number is 5/2 = 2. 
Step 5: Remainder when 2 is divided by 2 is zero. Therefore, arr[2] = 0. 
Step 6: Divide 2 by 2. New number is 2/2 = 1. 
Step 7: Remainder when 1 is divided by 2 is 1. Therefore, arr[3] = 1. 
Step 8: Divide 1 by 2. New number is 1/2 = 0. 
Step 9: Since number becomes = 0. Print the array in reverse order. Therefore the equivalent binary number is 1010.
*/

// 1. C++ program to convert a decimal number to binary number O(logn) 

#include <iostream>
using namespace std;

void decToBinary(int n)
{
	// array to store binary number
	int binaryNum[32];

	// counter for binary array
	int i = 0;
	while (n > 0) {

		// storing remainder in binary array
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	// printing binary array in reverse order
	for (int j = i - 1; j >= 0; j--)
		cout << binaryNum[j];
}

int main()
{
	int n = 17;
	decToBinary(n);
	return 0;
}


// 2. CPP program to Decimal to binary conversion using bitwise operator: Time complexity: O(1)

#include <iostream>
using namespace std;

int decToBinary(int n)
{
	// Size of an integer is assumed to be 32 bits
	for (int i = 31; i >= 0; i--) {
		int k = n >> i;
		if (k & 1)
			cout << "1";
		else
			cout << "0";
	}
}

int main()
{
	int n = 32;
	decToBinary(n);
}

// Output: 00000000000000000000000000100000
// loop iterates constant(32) number of times everytime even for small number 




/* 

Bitwise Operator

// C++ Program to demonstrate use of bitwise operators

#include <iostream>
using namespace std;

int main() {
	// a = 5(00000101), b = 9(00001001)
	int a = 5, b = 9;

	// The result is 00000001
	cout<<"a = " << a <<","<< " b = " << b <<endl;
	cout << "a & b = " << (a & b) << endl;

	// The result is 00001101
	cout << "a | b = " << (a | b) << endl;

	// The result is 00001100
	cout << "a ^ b = " << (a ^ b) << endl;

	// The result is 11111010
	cout << "~a = " << (~a) << endl;

	// The result is 00010010
	cout<<"b << 1" <<" = "<< (b << 1) <<endl;

	// The result is 00000100
	cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;

	return 0;
}


*/

// 3. TC: O(log n)

#include <bits/stdc++.h>
using namespace std;

string DecimalToBinary(int num)
{
	string str;
	while(num){
	if(num & 1) // 1
		str+='1';
	else // 0
		str+='0';
	num>>=1; // Right Shift by 1
	}
	return str;
}

void reverse(string str)
{
for(int i=str.size()-1 ; i>=0 ; i--)
cout<< str[i];
}

int main() {
	int num = 59;
	cout<< "Binary of num 59 is: ";
	reverse( DecimalToBinary(num) );
	return 0;
}


// 4. TC: O(logn)

#include <cmath>
#include <iostream>
using namespace std;

#define ull unsigned long long int

// Function to return the binary equivalent of decimal value N
int decimalToBinary(int N)
{
	// To store the binary number
	ull B_Number = 0;
	int cnt = 0;
	while (N != 0) {
		int rem = N % 2;
		ull c = pow(10, cnt);
		B_Number += rem * c;
		N /= 2;
		// Count used to store exponent value
		cnt++;
	}
	return B_Number;
}

int main()
{
	int N = 17;
	cout << decimalToBinary(N);
	return 0;
}


// 5. 

//including header file
#include <bits/stdc++.h>
using namespace std;

//Function to convert a decimal number to its binary form
string decimalToBinary(int n)
{
	//finding the binary form of the number and converting it to string.
	string s = bitset<64> (n).to_string();
	
	//Finding the first occurrence of "1" to strip off the leading zeroes.
	const auto loc1 = s.find('1');
	
	if(loc1 != string::npos)
		return s.substr(loc1);
	
	return "0";
}

int main()
{
	int n = 17;
	
	cout << decimalToBinary(n);

	return 0;
}
