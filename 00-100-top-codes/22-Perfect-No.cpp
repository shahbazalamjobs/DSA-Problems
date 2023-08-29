// Perfect No.
/* 
A perfect number is a number in which the sum of the proper positive divisors of the number is equal to the number itself.

For Example: 28
Divisors : 1 + 2 + 4 + 7 + 14 = 28
*/

#include <iostream>
using namespace std;

int main ()
{
    int n = 28, sum = 0;
    
    for(int i = 1; i < n; i++){
        if(n % i == 0)
            sum = sum + i;
    }
    
    if(sum == n)
        cout << n << " is a perfect number";
    else
        cout << n << " is not a perfect number";
    

}
// Time complexity: O(N)
// Space complexity: O(1)

// 2. Optimized: C++ program to check if a given number is perfect or not O(sqrt(n))

#include<iostream>
using namespace std;

bool isPerfect(long long int n)
{
	
	long long int sum = 1;

	// Find all divisors and add them
	for (long long int i=2; i*i<=n; i++)
	{
		if (n%i==0)
		{
			if(i*i!=n)
				sum = sum + i + n/i;
			else
				sum=sum+i;
		}
	}
	
	if (sum == n && n != 1)
		return true;

	return false;
}

int main()
{
	cout << "Below are all perfect numbers till 10000\n";
	for (int n =2; n<10000; n++)
		if (isPerfect(n))
			cout << n << " is a perfect number\n";

	return 0;
}



