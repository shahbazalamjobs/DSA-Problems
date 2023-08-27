// Max of 3 No.

#include <iostream>  
using namespace std;

int main ()
{
    int num1, num2, num3, max;
    
    cin >> num1>> num2 >> num3;
    
    max = num1;
    
    if(max < num2) {
        max = num2;
    }
    else if(max < num3) {
        max = num3;
    }

    cout << "Max. no is: " << max;    

    return 0;
}


// 2. 

    int first, second, third;
    first=10,second=20,third=30;
    
    //comparing first with other numbers
    if ((first >= second) && (first >= third))
        cout << first << " is the greatest "; 

    //comparing Second with other numbers 
    else if ((second >= first) && (second >= third))
        cout << second << " is the greatest";
    
    else
        cout << third << " is the greatest";
 
    return 0;
}


// 3. 

result =  max(first,max(second, third));
