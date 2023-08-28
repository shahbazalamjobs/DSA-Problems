// Program for Sum of the digits of a given number

// 1.  using loop T.C: O(log N), where N is the value of the input number
#include <iostream>
using namespace std;

int main() {
    
    int num, sum;
    
    cin >> num;
    
    sum = 0;
    
    while(num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    
    cout << sum;
    return 0;
}

// 2. using recursion

#include <iostream>
using namespace std;
class gfg {
public:
    int sumDigits(int no)
    {
        if (no == 0) {
            return 0;
        }
 
        return (no % 10) + sumDigits(no / 10);
    }
};
 
int main(void)
{
    gfg g;
 
    cout << g.sumDigits(687);
    return 0;
}

// 3. taking no. as string

// T.C: O(N)
#include <bits/stdc++.h>
using namespace std;

int getSum(string str)
{
	int sum = 0;

	for (int i = 0; i < str.length(); i++) {
		// Since ascii value of numbers starts from 48 so we subtract it from sum
		sum = sum + str[i] - 48;
	}
	return sum;
}

int main()
{
	string st = "123456789123456789123422";

	cout << getSum(st);
	return 0;
}

