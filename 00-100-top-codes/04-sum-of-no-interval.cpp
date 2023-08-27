// Find the Sum of Numbers in a Given Interval in C++

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
