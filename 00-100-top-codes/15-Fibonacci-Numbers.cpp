// Fibonaaci number upto nth term

// The Fibonacci numbers are the numbers in the following integer sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..

// 1. 

#include <iostream>
using namespace std;

int main()
{
    int num = 15;
    int a = 0, b = 1;
    
    // Here we are printing 0th and 1st terms
    if(num == 1) 
      cout << a;
    else 
      cout << a << ", " << b << ", ";
    
    int nextTerm;
    
    for(int i = 2; i < num; i++){
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        
        cout << nextTerm << ", ";
    }

    return 0;
}

// 2. 

#include <iostream>
using namespace std;

int Fib(int n){
    
    // Note : declaring static items too here
    static int t1 = 0, t2 = 1, nextTerm;
    
    if(n > 0)
    {    
        nextTerm = t1 + t2;
        t1 = t2;    
        t2 = nextTerm;    
    
        cout << nextTerm << ", ";    
        Fib(n-1);    
    }
    
}

int main()
{
    int n = 15;
    
    cout << "0, 1, ";
    
    // n-2 as 2 terms already printed
    Fib(n-2);

    return 0;
}

// 3. recursion

#include <iostream>
using namespace std;

int Fib(int n){
    
    // Note : declaring static items too here
    static int t1 = 0, t2 = 1, nextTerm;
    
    if(n > 0)
    {    
        nextTerm = t1 + t2;
        t1 = t2;    
        t2 = nextTerm;    
    
        cout << nextTerm << ", ";    
        Fib(n-1);    
    }
    
}

int main()
{
    int n = 15;
    
    cout << "0, 1, ";
    
    // n-2 as 2 terms already printed
    Fib(n-2);

    return 0;
}


// 4. 

#include <iostream>
using namespace std;

int fibonacci(int n){
    
    if(n <= 1)
        return n;
        
    return fibonacci(n-1) + fibonacci(n-2);
    
}

int main()
{
    int n = 15;

    for(int i = 0; i < n; i++)
        cout << fibonacci(i) << ", ";

    return 0;
}
