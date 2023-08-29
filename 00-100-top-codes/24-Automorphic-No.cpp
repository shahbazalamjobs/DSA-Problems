// C++ program to check if a number is Automorphic

// 1.  T.C: O(log10N)

#include <iostream>
using namespace std;

bool isAutomorphic(int N)
{
	
	if(N < 0) N = -N;

	int sq = N * N;

	while (N > 0) {
		// Return false, if any digit of N doesn't match with its square's digits from last
		if (N % 10 != sq % 10)
			return false;

		N /= 10;
		sq /= 10;
	}

	return true;
}

int main()
{
	int N = 5;

	isAutomorphic(N) ? cout << "Automorphic" : cout << "Not Automorphic";

	return 0;
}
