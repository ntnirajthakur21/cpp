//Program in C++ to take input of 20 numbers and display their sum ☺
// The Program is written by - Niraj Kumar Thakur

#include <iostream>     //Header file
using namespace std;
int main()              // Main function
{
    int num[20],sum=0;

    // For Loop will run for 20 times
    for(int i=0;i<20;i++){
        cout<<"Enter number "<<i+1<<"-\> ";
        cin>>num[i];                // Accepts a number
        sum=sum+num[i];             // Add the every new number every time
    }

    // Prints the reasult
    cout <<"\n-----------------------------\nThe total sum is -\>"<<sum<<"\n-----------------------------\n";
    return 0;
}                       // End of main function
