// Check if a Number is Positive or Negative in C++

#include <iostream>;
using namespace std;

int main(){
    
    float n;
    cin >> n;
    
    if(n > 0) {
        cout << "Number is positive";
    }
    else if (n < 0) {
        cout << "Number is negative";
    }
    else 
        cout << "Number is 0";
    
    return 0;
}
