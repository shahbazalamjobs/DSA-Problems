// Find the greatest of two numbers

// 1. Using if else

#include <iostream>
using namespace std;

int main()
{

    int num1, num2;
    
    cin >> num1 >> num2;
    
    if(num1 == num2) {
        cout<< "Equal";
    }
    else if (num1 < num2) {
        cout << "Number 2 is greatest";
    }
    else
        cout << "Number 1 is greatest";
    
    return 0;
}

// 2. max function

num1 = 5, num2 = 10;
cout << max(num1,num2) << " is greater";     // 10 is greater
// max, min function are inside lib math.h
