// 


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
