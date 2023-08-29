// Armstrong Number

// 1. Naive approach

// C++ program to determine whether the number is Armstrong number or not O(logN)
#include <bits/stdc++.h>
using namespace std;

// Function to calculate x raised to the power y .. it is optimized method
int power(int x, unsigned int y)
{
	if (y == 0)
		return 1;
	if (y % 2 == 0)
		return power(x, y / 2) * power(x, y / 2);
	return x * power(x, y / 2) * power(x, y / 2);

/*

More optimized power
	int power(int x, unsigned int y) {
	    if (y == 0)
	        return 1;
	
	    int temp = power(x, y / 2);
	    
	    if (y % 2 == 0)
	        return temp * temp;
	    else
	        return x * temp * temp;
	}	
}

*/

/* Function to calculate order of the number */
int order(int x)
{
	int n = 0;
	while (x) {
		n++;
		x = x / 10;
	}
	return n;
}

// Function to check whether the given number is Armstrong number or not
bool isArmstrong(int x)
{
	// Calling order function
	int n = order(x);
	int temp = x, sum = 0;
	while (temp) {
		int r = temp % 10;
		sum += power(r, n);
		temp = temp / 10;
	}

// If satisfies Armstrong condition
	return (sum == x);
}

int main()
{
	int x = 153;
	cout << boolalpha << isArmstrong(x) << endl;  //  boolalpha is used to to write the true or false instead of 1, 0 for bool return value
	x = 1253;
	cout << boolalpha << isArmstrong(x) << endl;
	return 0;
}

// When the boolalpha format flag is not set, bool values are insterted/extracted as
// integral values (0 and 1) instead of their textual representations: true and false.


/*

The if-else statement in the power function is used to handle two cases:

Even Exponent (y % 2 == 0): If the exponent y is even, it optimizes the calculation by using the property that (x^2)^n = x^(2n). 
This way, it avoids redundant calculations by calculating power(x, y / 2) only once and then squaring that result.

Odd Exponent (y % 2 != 0): If the exponent y is odd, it uses the property that (x^2)^n * x = x^(2n+1). 
It calculates power(x, y / 2) once, then multiplies it by x to get the correct result.

By using the if-else statement, the code optimizes the exponentiation process based on the parity of the exponent, reducing 
the number of calculations and improving the efficiency of the recursive algorithm.

1. More optimized power 

int power(int x, unsigned int y) {
    if (y == 0)
        return 1;

    int temp = power(x, y / 2);
    
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

*/


// 2. 

// C++ program to check whether the number is an Armstrong number or not O(logN)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
	int n = 1465112058;
	int temp = n;
	int p = 0;
    	int digit = (int)log10(n) + 1;

	// Function to calculate the sum of individual digits
	while (n > 0) {
		int rem = n % 10;
		p = (p) + (pow(rem, digit));
		n = n / 10;
	}

	// Condition to check whether the value
	// of P equals to user input or not.
	if (temp == p) {
		cout << ("Yes. It is Armstrong No.");
	}
	else {
		cout << ("No. It is not an Armstrong No.");
	}
	return 0;
}


// 3. using string O(N)

// C++ program to check whether the number is Armstrong number or not
#include <bits/stdc++.h>

using namespace std;

string armstrong(int n)
{
	string number = to_string(n);

	n = number.length();
	long long output = 0;
	for (char i : number)
		output = output + (long)pow((i - '0'), n);

	if (output == stoll(number))
		return ("True");
	else
		return ("False");
}

int main()
{
	cout << armstrong(153) << endl;
	cout << armstrong(1253) << endl;
}
