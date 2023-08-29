// Check for Perfect Square in C++
// Today in this article we will discuss the program to check for perfect square in C++ programming language. 
// We are given with an integer number and need to print “True” if it is, otherwise “False”.

// 1. 

#include <bits/stdc++.h>
using namespace std;
 
bool isPerfectSquare(long double x)
{
    if (x >= 0) {
 
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    
    return false;
}
 
int main()
{
    long long x = 84;
    if (isPerfectSquare(x))
        cout << "True";
    else
        cout << "False";
    return 0;
}



