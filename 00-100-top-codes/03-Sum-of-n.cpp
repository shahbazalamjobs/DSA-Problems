// Find the Sum of N Natural Numbers in C++

// 1. Loop
#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cin>> num;
    
    int  sum = 0;
    
    for (int i = 1; i <= num; i++) {
        sum = sum + i;
    }
    
    cout << sum;
    return 0;
}

// 2. Formula

#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cin>> num;
        
    int sum = 0;
    
    sum = num * (num + 1) / 2 ;
    
    cout << sum;
    return 0;
}


// 3. Recursively

#include <iostream>
using namespace std;

// Recursive function 
int sumRecursive(int num) {
    if(num == 0){
        return num;
    } 
    
    return num + sumRecursive(num - 1); 
}

int main()
{
    int num = 0;
    cin>> num;
    
    int sum = sumRecursive(num);
    
    cout << sum;
    return 0;
}
