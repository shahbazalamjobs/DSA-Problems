/*
 Find the maximum number of handshakes which can happen between N number of people given the fact that any two people shake hands exactly once 
*/

/*

For the number of handshakes to be maximum, every person should hand-shake with every other person in the room

For the first person, there will be N-1 people to shake hands with
For second person, there will be N -1 people available but as he has already shaken hands with the first person, there will be N-1-1 = N-2 shake-hands
For third person, there will be N-1-1-1 = N-3, and So On…
Therefore the total number of handshake   =   ( N – 1 + N – 2 +….+ 1 + 0 )   =   ( (N-1) * N ) / 2.

*/

// C++ program to find the maximum number of handshakes

#include<iostream>
using namespace std; 

int main()
{

    //fill the code
    int num = 9;
    int total = num * (num-1) / 2; // Combination nC2
    cout<<"For "<<num<<" people there will "<<total<<" handshakes";

    return 0;

}

