//Abundant Number in C++
/*
We will learn different ways of Abundant Number in C++
Abundant number is an number in which the sum of the proper divisors of the number is greater than the number itself.
Proper Divisor: All factors leaving no. itself

Ex. Abundant number 12 having a proper divisor is 1, 2, 3, 4, 6 whose sum is 16 > 12
*/

#include <iostream>
using namespace std;

int main ()
{
    int n = 12, sum = 0;
    
    for(int i = 1; i < n; i++)
    { 
      if(n % i == 0) 
        sum = sum + i; 
    } 
    
    if(sum > n){ 
        cout << n << " is an Abundant Number\n"; 
        cout << "The Abundance is: " << (sum-n);
    } else 
        cout << n << " is not an Abundant Number\n"; 
} 

// Time complexity: O(N)


/* -------------------------------- */

// An Optimized Solution to check Abundant Number : O(sqrt(N))
#include <bits/stdc++.h>
using namespace std;

// Function to calculate sum of divisors
int getSum(int n)
{
	int sum = 0;

	// Note that this loop runs till square root
	// of n
	for (int i=1; i<=sqrt(n); i++)
	{
		if (n%i==0)
		{
			// If divisors are equal,take only one
			// of them
			if (n/i == i)
				sum = sum + i;

			else // Otherwise take both
			{
				sum = sum + i;
				sum = sum + (n / i);
			}
		}
	}

	// calculate sum of all proper divisors only
	sum = sum - n;
	return sum;
}

// Function to check Abundant Number
bool checkAbundant(int n)
{
	// Return true if sum of divisors is greater
	// than n.
	return (getSum(n) > n);
}

/* Driver program to test above function */
int main()
{
	checkAbundant(12)? cout << "YES\n" : cout << "NO\n";
	checkAbundant(15)? cout << "YES\n" : cout << "NO\n";
	return 0;
}
