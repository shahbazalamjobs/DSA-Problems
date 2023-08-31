// calculate addition of two Fractions

// 1.

#include<iostream>
using namespace std;

// GCD function
int findGCD(int n1, int n2)
{
    int gcd;
    for(int i=1; i <= n1 && i <= n2; i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    return gcd;
}

int main()
{
    int num1,den1;    
    cout << "Enter numerator and denominator of first number : "; cin >> num1 >> den1;
    
    int num2,den2;
    cout << "Enter numerator and denominator of second number: "; cin >> num2 >> den2;
    
    //finding lcm of the denominators
    int lcm = (den1*den2)/findGCD(den1,den2);
    
    //finding the sum of the numbers
    int sum=(num1*lcm/den1) + (num2*lcm/den2);
    
    //normalizing numerator and denominator of result
    int num3=sum/findGCD(sum,lcm);
    
    lcm=lcm/findGCD(sum,lcm);
    
    //printing output
    cout<<num1<<"/"<<den1<<" + "<<num2<<"/"<<den2<<" = "<<num3<<"/"<<lcm;
    
    return 0;
}

// 2.  O(log(min(a, b)), where a and b are two integers.

// C++ program to add 2 fractions
#include<bits/stdc++.h>
using namespace std;

// Function to return gcd of a and b
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b%a, a);
}

// Function to convert the obtained fraction into it's simplest form
void lowest(int &den3, int &num3)
{
	// Finding gcd of both terms
	int common_factor = gcd(num3,den3);

	// Converting both terms into simpler terms by dividing them by common factor
	den3 = den3/common_factor;
	num3 = num3/common_factor;
}

//Function to add two fractions
void addFraction(int num1, int den1, int num2,
				int den2, int &num3, int &den3)
{
	// Finding gcd of den1 and den2
	den3 = gcd(den1,den2);

	// Denominator of final fraction obtained finding LCM of den1 and den2
	// LCM * GCD = a * b
	den3 = (den1*den2) / den3;

	// Changing the fractions to have same denominator Numerator of the final fraction obtained
	num3 = (num1)*(den3/den1) + (num2)*(den3/den2);

	// Calling function to convert final fraction into it's simplest form
	lowest(den3,num3);
}

int main()
{
	int num1=1, den1=500, num2=2, den2=1500, den3, num3;
	addFraction(num1, den1, num2, den2, num3, den3);
	printf("%d/%d + %d/%d is equal to %d/%d\n", num1, den1,num2, den2, num3, den3);
	return 0;
}
