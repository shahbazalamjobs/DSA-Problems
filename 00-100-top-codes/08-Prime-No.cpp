// Number is a Prime or Not in C++

// 1. Recursive approach: TC: O(N)

#include <iostream>  
using namespace std;

bool isPrime(int num) {
    static int i = 2;
    
    // Corner case
    if (num == 0 || num == 1) 
        return false;
    // checking prime
    if (num == i)
        return true;
    
    // base case    
    if (num % i == 0) 
        return false;
    
    i++;
    
    return isPrime(num);
}

// Driver code
int main ()
{
    
    int num;
    cin >> num;
    
    isPrime(num) ? cout << "Prime" : cout << "Not Prime";

    return 0;
}


// 2. more efficient:  Iterate through all numbers from 2 to ssquare root of n and for every number check if it divides n
// TC: O(sqrt(n))

#include <bits/stdc++.h>
using namespace std;
 
// Function check whether a number
// is prime or not
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
// Driver Code
int main()
{
    isPrime(11) ? cout << "true\n" : cout << "false\n";
    return 0;
}

// 3. 
// TC:  O(sqrt(n))

#include <bits/stdc++.h>
using namespace std;
 
// Function check whether a number
// is prime or not
bool isPrime(int n)
{
    // Check if n=1 or n=0
    if (n <= 1)
        return false;
    // Check if n=2 or n=3
    if (n == 2 || n == 3)
        return true;
    // Check whether n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0)
        return false;
     
    // Check from 5 to square root of n
    // Iterate i by (i+6)
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 
// Driver Code
int main()
{
    isPrime(11) ? cout << "true\n" : cout << "false\n";
    return 0;
}
