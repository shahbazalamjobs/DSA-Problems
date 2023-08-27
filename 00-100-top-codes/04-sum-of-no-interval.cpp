// Find the Sum of Numbers in a Given Interval in C++

// 1. using loop
#include <iostream>
using namespace std;

int findSum(int num1, int num2, int sum) {
    for(int i = num1; i <= num2; i++) {
        sum = sum + i;     
    }
    
    return sum;
}

int main()
{
    int num1, num2;
    
    int sum = 0;
    
    cin>> num1 >> num2;
    
    if(num1 < num2){
        sum = findSum(num1, num2, sum);
    }
        
    else {
        sum = findSum(num2, num1, sum);
    }
        
    cout<< sum;
    
    return 0;
}

// 2. Using recursion

// Find the Sum of Numbers in a Given Interval in C++

#include <iostream>
using namespace std;

int sumRecursive(int num1, int num2) {
    if(num1 == num2)    // or  num1 > num2
        return num1;
    
    return num2 + sumRecursive(num1, num2 - 1);
}

int main()
{

    int num1, num2;
    
    cin>> num1 >> num2;
    int sum = 0;
   
    if(num1 < num2) {
        sum = sumRecursive(num1, num2);    
    }
    else {
        sum = sumRecursive(num2, num1);
    }
    
    cout<< sum;
    
    return 0;
}
