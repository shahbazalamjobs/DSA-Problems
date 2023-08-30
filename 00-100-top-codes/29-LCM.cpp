// 11 C++ program to find LCM of two numbers

// 1. Time Complexity: O(log(min(a,b))

/* 

   a x b = LCM(a, b) * GCD (a, b)
   LCM(a, b) = (a x b) / GCD(a, b)

*/

#include <iostream>
using namespace std;

// Recursive function to return gcd of a and b
long long gcd(long long int a, long long int b)
{
if (b == 0)
	return a;
return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}

// Driver program to test above function
int main()
{
	int a = 15, b = 20;
	cout <<"LCM of " << a << " and "
		<< b << " is " << lcm(a, b);
	return 0;
}


// 2. Using conditional for loop

#include <bits/stdc++.h>
using namespace std;

int LCM(int a, int b)
{
	int greater = max(a, b);
	int smallest = min(a, b);
	for (int i = greater; ; i += greater) {
		if (i % smallest == 0)
			return i;
	}
}

int main()
{
	int a = 10, b = 5;
	cout << "LCM of " << a << " and "
		<< b << " is " << LCM(a, b);
	return 0;
}
