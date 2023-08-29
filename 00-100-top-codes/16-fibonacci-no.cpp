// 

// 1. Fibonacci Series using Space Optimized Method

#include<bits/stdc++.h>
using namespace std;
 
int F(int N)
{
    int a = 0, b = 1, c, i;
    if( N == 0)
        return a;
    for(i = 2; i <= N; i++)
    {
       c = a + b;
       a = b;
       b = c;
    }
    return b;
}

int main()
{
    int N = 5;
     
    cout << F(N);
    return 0;
}

// 2. using Recursion

#include<bits/stdc++.h>
using namespace std;
 
int F(int N)
{
    if (N <= 1)
       {
        return N;
       }
       
    return F(N-1) + F(N-2);
}
 
int main ()
{
    int N = 5;
    cout << F(N);
    return 0;
}
