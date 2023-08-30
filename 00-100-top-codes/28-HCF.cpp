// HCF or GCD of 2 no.s

// 1. simple : O(N)

#include<iostream>
using namespace std;

int main()
{
    int num1 = 36, num2 = 60, hcf = 1;

    for(int i = 1; i <= num1 || i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    cout<<"HCF of "<<num1<<" and "<<num2<<" is "<<hcf;

    return 0;
}

// 2. Method 2 : Repeated Subtraction O(min(m,n))
/*
  Algorithm

  - Run a while loop until num1 is not equals to num2
  - If num1 > num2 then num1 = num1 – num2
  - Else num2 = num2 – num1
  - After the loop ends both num1 & num2 stores HCF
  
*/


#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	// Everything divides 0
	if (a == 0)
		return b;
	if (b == 0)
		return a;

	// Base case
	if (a == b)
		return a;

	// a is greater
	if (a > b)
		return gcd(a - b, b);
  
	return gcd(a, b - a);
}

// Driver code
int main()
{
	int a = 98, b = 56;
	cout << "GCD of " << a << " and " << b << " is "
		<< gcd(a, b);
	return 0;
}

/* --------Optimizing above code------------------------ */
/*
Consider a = 98 and b = 56

a = 98, b = 56:

a > b so put a = a-b and b remains same. So  a = 98-56 = 42  & b= 56. 
a = 42, b = 56:

Since b > a, we check if b%a=0. Since answer is no, we proceed further. 
Now b>a. So b = b-a and a remains same. So b = 56-42 = 14 & a= 42. 
a = 42, b = 14:

Since a>b, we check if a%b=0. Now the answer is yes. 
So we print smaller among a and b as H.C.F . i.e. 42 is  3 times of 14.
So HCF is 14. 

T.C: O(min(a, b))
*/


#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	// Everything divides 0
	if (a == 0)
		return b;
	if (b == 0)
		return a;

	// Base case
	if (a == b)
		return a;

	// a is greater
	if (a > b) {
		if (a % b == 0)
			return b;
		return gcd(a - b, b);
	}
	if (b % a == 0)
		return a;
	return gcd(a, b - a);
}

int main()
{
	int a = 98, b = 56;
	cout << "GCD of " << a << " and " << b << " is "<< gcd(a, b);
	return 0;
}


/* --------Optimization using division:------------------------ */
// O(log(min(a,b))

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	int a = 98, b = 56;
	cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
	return 0;
}



/* --------In built func------------------------ */


cout << "The gcd of a and b is " << __gcd(a, b) << endl;


/* --------In built func------------------------ */

// 3. Repeated Subtraction using Recursion: O(min(a,b)) 

#include<iostream>
using namespace std;

int findHCF(int, int);

int main()
{
    int num1 = 36, num2 = 60;

    cout<< "HCF of "<< num1<< " and "<< num2 <<" is "<< findHCF(num1, num2); 
    
    return 0; 
} 

int findHCF(int num1, int num2) 
{ 
    // Everything divides 0 
    if(num1==0 || num2==0) 
    { 
        return ( num1 + num2 ); 
    } 

    // base case 
    if(num1==num2) 
    { 
         return num1; 
    } 

    // num1 > num2
    if(num1>num2)
    {
        return findHCF(num1 - num2, num2);
    }
    else
    {
        return findHCF(num1, num2 - num1);
    }
}
