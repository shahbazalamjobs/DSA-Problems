// C++ program to check whether a number can be expressed as a sum of two prime numbers

// 1. 

#include <iostream>
using namespace std;

// Function to check if a number is prime --- O(sqrt(n))
bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

// Function to check if a number can be expressed as the sum of two prime numbers 
// --- O(n), 'n' is the input number to check
bool checkSumOfPrimes(int num) {
    for (int i = 2; i <= num / 2; ++i) {    
        if (isPrime(i) && isPrime(num - i))
            return true;
    }
    return false;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (checkSumOfPrimes(num))
        cout << num << " can be expressed as the sum of two prime numbers." << endl;
    else
        cout << num << " cannot be expressed as the sum of two prime numbers." << endl;
    return 0;
}


/* -------Alternative to Check No is Prime or Not---------------- */


bool isPrime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
 
    return true;
}



// 2. O(a * a /2) = O (a^2 / 2)  -- Not efficient

#include <iostream>
using namespace std;
bool prime_or_not(int a);
int main() {
  int a, i;
  bool flag = false;
  cout << "Enter a positive  integer: ";
  cin >> a;
  for(i = 2; i <= a/2; ++i) {
    if (prime_or_not(i)) {
      if (prime_or_not(a - i)) {
        cout << a << " = " << i << " + " << a-i << endl;
        flag = true;
      }
    }
  }
  if (!flag)
    cout << a << " can't be expressed as sum of two prime numbers.";
  return 0;
}
bool prime_or_not(int a) {
  int i;
  bool is_prime = true;
  if (a == 0 || a == 1) {
    is_prime = false;
  }
  for(i = 2; i <= a/2; ++i) {
    if(a % i == 0) {
      is_prime = false;
      break;
    }
  }
  return is_prime;
}
