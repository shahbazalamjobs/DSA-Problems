
// 1. Naive solution: loop: O(N)

#include <iostream>
using namespace std;

void printDivisors(int n)
{
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			cout <<" " << i;
}

int main()
{
	cout <<"The divisors of 100 are: \n";
	printDivisors(100);
	return 0;
}

// 2. 

// A Better (than Naive) Solution to find all divisors
#include <iostream>
#include <math.h>
using namespace std;

void printDivisors(int n)
{
	for (int i=1; i<=sqrt(n); i++)
	{
		if (n%i == 0)
		{
			if (n/i == i)
				cout <<" "<< i;

			else // Otherwise print both
				cout << " "<< i << " " << n/i;
		}
	}
}

int main()
{
	cout <<"The divisors of 100 are: \n";
	printDivisors(100);
	return 0;
}
