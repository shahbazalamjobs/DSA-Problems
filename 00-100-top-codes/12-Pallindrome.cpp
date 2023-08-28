// Palindrome Program in C++

// 1. Using inbuilt stl,  Time Complexity: O(N)

#include <bits/stdc++.h>
using namespace std;

// Function to check whether the string is palindrome
string isPalindrome(string S)
{
	
	// string S
	string P = S;

	// Reverse the string P
	reverse(P.begin(), P.end());

	if (S == P)
	{
		return "Yes";
	}
	else
	{
		return "No";
	}
}

int main()
{
	string S = "ABCDCBA";
	cout << isPalindrome(S);

	return 0;
}

// 2. Using function Time Complexity: O(N)

#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string S)
{
	for (int i = 0; i < S.length() / 2; i++)
	{
		if (S[i] != S[S.length() - i - 1])
		{
			return "No";
		}
	}
	return "Yes";
}

int main()
{
	string S = "ABCDCBA";
	cout << isPalindrome(S);

	return 0;
}


// 3. Recursive way to find reverse of a number: Time Complexity : O(N)

#include<iostream> 
using namespace std;


int getReverse(int num, int rev){
    if(num == 0)
        return rev;
    
    int rem = num % 10;
    rev = rev * 10 + rem;
    
    return getReverse(num / 10, rev);
}


int main ()
{
    int num, reverse = 0;
    num=123454321;
    cout <<"\nThe number is: "<<num; 
    
    
    // palindrome if num and reverse are equal
    if (getReverse(num, reverse) == num)
        cout << num << " is Palindrome";
    else
        cout << num << " is not a Palindrome";

}

// 4. We can also use loop to find reverse
