
// Strong Number in C++

// Strong Numbers is a number in which the sum of the factorial of individual digits of the numbers is equal to the number itself.
// 145 = 1! x 4! x 5! =  145

// 1. 

#include <iostream>
using namespace std;

// function to calculate factorial
int facto(int n){
    int fact = 1;
    
    for(int i = 1; i <= n; i++)
            fact = fact * i;
    
    return fact;
}

int detectStrong(int num){
    
    int digit, sum = 0;
    int temp = num;
    
    // calculate 1! + 4! + 5!
    while(temp!=0){
        digit = temp % 10;
        
        sum = sum + facto(digit);
        temp /= 10;
    }
    
    // returns 1 if both equal else 0
    return sum == num;
    
}
int main ()
{
    int num = 145;
    
    if(detectStrong(num))
        cout << num << " is Strong Number";
    else
        cout << num << " is Not Strong Number";

}


// 2. Recursive

#include <iostream>
using namespace std;

int facto(int num)
{
    if(num == 0)
        return 1;
        
    return num * facto(num-1);
}

int detectStrong(int num){
    
    int digit, sum = 0;
    int temp = num;
  
    while(temp!=0){
        digit = temp % 10;
        
        sum = sum + facto(digit);
        temp /= 10;
    }
    
    // returns 1 if both equal else 0
    return sum == num;
    
}
int main ()
{
    int num = 145;
    
    if(detectStrong(num))
        cout << num << " is Strong Number";
    else
        cout << num << " is Not Strong Number";

}