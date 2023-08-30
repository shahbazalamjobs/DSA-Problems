// Binary to Octal

// 1. We can convert binary to dec then dec to oct

// 2. GFG: https://www.geeksforgeeks.org/cpp-program-for-binary-to-octal-conversion/

// 3. We will first convert the Binary number into Decimal and then convert the Decimal number into Octal

#include<iostream>
#include<math.h>
using namespace std;

// function to convert binary to octal
void convert(long long num)
{
    int octalDigit = 0, count = 1, i = 0, pos = 0;
    int octalArray[32] = {0};

    while(num != 0)
    {
        int digit = num % 10;
        
        octalDigit += digit * pow(2, i);
        i++;
        num /= 10;
        
        // placing current octalsum for 3 pair in array index position
        octalArray[pos] = octalDigit;
        
        // whenever we have read next 3 digits
        // setting values to default
        // increasing pos so next values can be placed at next array index
        if(count % 3 == 0)
        {
            octalDigit = 0;
            i = 0;
            pos++;
        }
        count++;
    }
        
    // printing octal array in reverse order
    for (int j = pos; j >= 0; j--)
        cout<<octalArray[j];

}

//main program
int main()
{
    // long used rather than int to store large values
    long long binary;
    
    printf("Enter binary number: ");
    scanf("%lld", &binary);
    
    convert(binary);
    
    return 0;
}
