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
