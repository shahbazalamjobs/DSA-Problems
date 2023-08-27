
// 1. using if-else

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>> num;
    
    //Condition to check if the num odd or even
    
    if (num % 2 == 0){
        cout << "Even";
    }
    else
        cout << "Odd";
    
    return 0;
}


// 2. using ternary

#include <iostream>
namespace std;

int main ()
{
    int number;
    cout << "Enter a number:"; cin >> number;

    
    //Checking if the number is divisible by 2
    number % 2 == 0 ? cout << "Even":cout << "Odd";
    
    return 0;
}
