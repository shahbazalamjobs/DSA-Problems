// Two numbers num1 & num2 are friendly pairs if the following holds true -
/*
(Sum of divisors of num1)/num1= (Sum of divisors of num2)/num2
*/

// 1. Time complexity: O(N)

#include <iostream>
using namespace std;

int getDivisorsSum(int num){
    
    int sum = 0;
    
    for(int i = 1; i < num; i++){
        if(num % i == 0)
            sum = sum + i;
    }
    return sum;
}

int main ()
{
    int num1 = 30, num2 = 140;
    
    int sum1 = getDivisorsSum(num1);
    int sum2 = getDivisorsSum(num2);
    
    if(sum1/num1 == sum2/num2)
        cout << num1 << " & " << num2 << " are friendly pairs";
    else
        cout << num1 << " & " << num2 << " are not friendly pairs";

    
}

// 2. Time complexity: O(√N)

#include <iostream>
#include <math.h>
using namespace std;

int getDivisorsSum(int n){
    
    int sum = 0;
    
    for(int i = 1; i < sqrt(n); i++) 
    { 
        if (n % i == 0) 
        { 
            // For n : (1, n) will always be pair of divisor acc to def., we must ignore adding n itself as divisor 
            // when calculating for abundant number 
            if(i == 1) 
                sum = sum + i; 

            // Example For 100 (10,10) will be one of the pair But, we should add value 10 to the sum just once 
            else if(i == n/i) 
                sum = sum + i; 

            // add both pairs as divisors For any divisor i, n/i will also be a divisor 
            else 
                sum = sum + i + n/i; 
        } 
    } 
    return sum; 
} 

int main ()
{
    int num1 = 30, num2 = 140;
    
    int sum1 = getDivisorsSum(num1);
    int sum2 = getDivisorsSum(num2);
    
    if(sum1/num1 == sum2/num2)
        cout << num1 << " & " << num2 << " are friendly pairs";
    else
        cout << num1 << " & " << num2 << " are not friendly pairs";

    
}

