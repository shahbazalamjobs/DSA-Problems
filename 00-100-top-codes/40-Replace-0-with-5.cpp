

// C++ program to replace all ‘0’ with ‘5’ in an input Integer

// 1. Iterative approach 1: Time Complexity: O(n), where n is number of digits in the number.

#include <iostream>
using namespace std;

// A iterative function to reverse a number
int reverseTheNumber(int temp)
{
	int ans = 0;
	while (temp > 0) {
		int rem = temp % 10;
		ans = ans * 10 + rem;
		temp = temp / 10;
	}
	return ans;
}

int convert0To5(int num)
{
	// if num is 0 return 5
	if (num == 0)
		return 5;

	// Extract the last digit and change it if needed
	else {
		int temp = 0;

		while (num > 0) {
			int digit = num % 10;
			//if digit is 0, make it 5
			if (digit == 0)
				digit = 5;

			temp = temp * 10 + digit;
			num = num / 10;
		}
		// call the function reverseTheNumber by passing temp
		return reverseTheNumber(temp);
	}
}

int main()
{
	int num = 10120;
	cout << convert0To5(num);
	return 0;
}

// 2. Iterative Approach-2: Time Complexity: O(k), the loops run only k times, where k is the number of digits of the number.

#include<bits/stdc++.h>
using namespace std;

// Returns the number to be added to the input to replace all zeroes with five
int calculateAddedValue(int number)
{
	
	// Amount to be added
	int result = 0;

	// Unit decimal place
	int decimalPlace = 1;
	
	if (number == 0)
	{
		result += (5 * decimalPlace);
	}

	while (number > 0)
	{
		if (number % 10 == 0)
		{
			
			// A number divisible by 10, then this is a zero occurrence in the input
			result += (5 * decimalPlace);

		}
		
		// Move one decimal place
		number /= 10;
		decimalPlace *= 10;
	}
	return result;
}

int replace0with5(int number)
{
	return number += calculateAddedValue(number);
}

int main()
{
	cout << replace0with5(1020);
}


// 3. Recursive 

#include <bits/stdc++.h>
using namespace std;

// A recursive function to replace all 0s with 5s in an input number It doesn't
// work if input number itself is 0.
int convert0To5Rec(int num)
{
	// Base case for recursion termination
	if (num == 0)
		return 0;

	int digit = num % 10;
	if (digit == 0)
		digit = 5;

	// Convert remaining digits and append the last digit
	return convert0To5Rec(num / 10) * 10 + digit;
}

// It handles 0 and calls convert0To5Rec() for other numbers
int convert0To5(int num)
{
	if (num == 0)
		return 5;
	else
		return convert0To5Rec(num);
}

int main()
{
	int num = 10120;
	cout << convert0To5(num);
	return 0;
}


// 4. Built in function

#include <bits/stdc++.h>
using namespace std;

string change(int n)
{
  string temp = to_string(n) + "";
  replace(temp.begin(), temp.end(), '0', '5');
  return temp;
}

int main()
{
  int num = 10120;
  cout << (change(num));
  return 0;
}

