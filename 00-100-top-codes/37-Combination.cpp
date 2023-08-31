// Combination 

// 1. CPP program To calculate The Value Of nCr : Time Complexity: O(N)

#include <bits/stdc++.h>
using namespace std;

int fact(int n);

int nCr(int n, int r)
{
	return fact(n) / (fact(r) * fact(n - r));
}

int fact(int n)
{
	if(n==0)
	return 1;
	
  int res = 1;
	for (int i = 2; i <= n; i++)
		res = res * i;
	return res;
}

int main()
{
	int n = 5, r = 3;
	cout << nCr(n, r);
	return 0;
}

// 2. using formula of binomial Coefficient:

#include <iostream>
using namespace std;
int main() {
		int n = 5;
		int r = 2;
		double sum = 1;

    // Calculate the value of n choose r using the binomial coefficient formula
		for(int i = 1; i <= r; i++){
			sum = sum * (n - r + i) / i;
		}
		cout<<(int)sum<<endl;

	return 0;
}
