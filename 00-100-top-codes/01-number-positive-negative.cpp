// Check if a Number is Positive or Negative in C++

// 1. using if else
#include <iostream>;
using namespace std;

int main(){
    
    float num;
    cin >> num;
    
    if(num > 0) {
        cout << "Number is positive";
    }
    else if (num < 0) {
        cout << "Number is negative";
    }
    else 
        cout << "Number is 0";
    
    return 0;
}


// 2. using ternary operator

#include <iostream>
using namespace std;

int main()
{
    float num;
    cin>> num;
    
    //Condition to check if the num is 0, positive or negative
    
    if(num == 0)
            cout << "Zero"; else (num > 0) ? cout << "Positive": cout << "Negative";
    
    return 0;
}

