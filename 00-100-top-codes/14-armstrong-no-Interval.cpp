// Find the Armstrong Numbers in a given Interval in C++

#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int num)
{
	int order_n = (int)log10(num) + 1;
	int num_temp = num, sum = 0;

	while (num_temp > 0)
	{
		int curr = num_temp % 10;
		sum += pow(curr, order_n);
		num_temp /= 10;
	}
	if (sum == num)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{

	cout << "Armstrong numbers between 1 to 1000 : ";
	
	for (int num = 1; num <= 1000; ++num)
	{

		if (isArmstrong(num))
		{
			cout << num << " ";
		}
	}
	return 0;
}
