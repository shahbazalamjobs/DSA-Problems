// Program to find Prime Numbers Between given Interval

// 1. 

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;

    if (num <= 3)
        return true;

    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}

void primeNoList(int num1, int num2) {
    for (int i = num1; i <= num2; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    primeNoList(num1, num2);
    return 0;
}


// 2. 

// T.C: O(N2)

#include <bits/stdc++.h>
using namespace std;

int main()
{

	int a, b, i, j, flag;
	cin >> a >> b; // Take input
	for (i = a; i <= b; i++) {
		
		if (i == 1 || i == 0)
			continue;

		// flag variable to tell if i is prime or not
		flag = 1;

		for (j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}

		// flag = 1 means i is prime and flag = 0 means i is not prime
		if (flag == 1)
			cout << i << " ";
	}

	return 0;
}


