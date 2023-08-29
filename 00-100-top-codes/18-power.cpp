// power of a no

// 1. Function to calculate x raised to the power y in * O(logn)
int power(int x, unsigned int y)
{
	int temp;
	if (y == 0)
		return 1;
	temp = power(x, y / 2);
	if (y % 2 == 0)
		return temp * temp;
	else
		return x * temp * temp;
}

// 2. using builtin function T.C: O(1)

#include <bits/stdc++.h>
using namespace std;

int power(int x, int n)
{

	// return type of pow() function is double
	return (int)pow(x, n); // inside <math.h> header file
}

int main()
{
	int x = 2;
	int n = 3;

	cout << (power(x, n));
}

// 3.   loop: T.C: O(N)

long power(int x, unsigned n)
{
    // Initialize result to 1
    long long pow = 1;
  
    // Multiply x for n times
    for (int i = 0; i < n; i++) {
        pow = pow * x;
    }
  
    return pow;
}
