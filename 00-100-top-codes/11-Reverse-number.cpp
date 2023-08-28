// Write a program to reverse digits of a number

// 1. loop, T.C: O(log10N)
#include <bits/stdc++.h>

using namespace std;

int reverseDigits(int num)
{
	int rev_num = 0;
	while (num > 0) {
		rev_num = rev_num * 10 + num % 10;
		num = num / 10;
	}
	return rev_num;
}

int main()
{
	int num = 4562;
	cout << "Reverse of no. is " << reverseDigits(num);
	getchar();
	return 0;
}

// 2. recursion 

#include <bits/stdc++.h>
using namespace std;

int reverseDigits(int num)
{
	static int rev_num = 0;
	static int base_pos = 1;
	if (num > 0) {
		reverseDigits(num / 10);
		rev_num += (num % 10) * base_pos;
		base_pos *= 10;
	}
	return rev_num;
}

// Driver Code
int main()
{
	int num = 4562;
	cout << "Reverse of no. is " << reverseDigits(num);

	return 0;
}


// 3. using string

// C++ program to reverse a number
#include <bits/stdc++.h>
using namespace std;

int reverseDigits(int num)
{
	// converting number to string
	string strin = to_string(num);

	// reversing the string
	reverse(strin.begin(), strin.end());

	// converting string to integer
	num = stoi(strin);

	// returning integer
	return num;
}
int main()
{
	int num = 4562;
	cout << "Reverse of no. is " << reverseDigits(num);
	return 0;
}

// T.C: O(log10n)
