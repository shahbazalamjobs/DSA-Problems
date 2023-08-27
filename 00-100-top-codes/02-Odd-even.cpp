// 1. if else statement

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


// 2. using ternary operator

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>> num;
    
    //Condition to check if the num odd or even
    
    string result = (num % 2 == 0) ? "Even" : "Odd";
    cout << result;
    
    return 0;
}

// 3. using bitwise operator

#include <iostream>
using namespace std;

bool isEven (int num) {
    return (!(num & 1)) ;   
}

int main()
{
    int num;
    cin>> num;
    
    //Condition to check if the num odd or even
    
    if(isEven(num)){
        cout << "Even";
    }
    else 
        cout <<"Odd";
    
    return 0;
}
