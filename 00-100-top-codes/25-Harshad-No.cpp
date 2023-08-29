// Harshad Number in C++ 
/*
A Harshad number is a positive integer that is divisible by the sum of the digits of the integer. It is also called the Niven number.

For Example : 153
Sum of digits = 1 + 5 + 3 = 9
153 is divisible by 9 so 153 is a Harshad Number.

*/

#include <bits/stdc++.h>
using namespace std;

bool checkHarshad(int n)
{

	int sum = 0;
	for (int temp = n; temp > 0; temp /= 10)
		sum += temp % 10;

	return (n % sum == 0);
}

int main()
{
	checkHarshad(12) ? cout << "Yes\n" : cout << "No\n";
	checkHarshad(15) ? cout << "Yes\n" : cout << "No\n";

	return 0;
}
