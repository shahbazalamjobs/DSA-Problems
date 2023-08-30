// C++ Program to find Permutations in which n people can occupy r seats in a classroom
// Or Write code to find all possible permutations in which n people can occupy r seats in a theater

/*
This is a problem specific program which deals with problems like in how many ways employees can be arranged 
in the seats available in a company or the same for the students in a school or college.
*/

// Use permutation formula { factorial(n) / factorial(n-r) }

// Permutations in which n people can occupy r seats

#include<iostream>
using namespace std;
  
int factorial(int num)
{
    int fact=1;
    for(int i=num; i>=1 ;i--)
        fact*=i;
    return fact;
}
    
int main()
{
    int n,r;
    
    cout<<"Enter number of people: ";
    cin>>n;
    
    cout<<"Enter number of seats: ";
    cin>>r;
            
    //finding all possible arrangements of n people on r seats by using formula of permutation
    int p = factorial(n)/factorial(n-r);

    printf("Total possible arrangements: %d",p);

    return 0;
}
