//Simple Calculator Program in C++ using switch case ❤
//The Program is Written By - Niraj Kumar Thakur ☺
//---------------------------------------------------------
#include <iostream>     //Input and output library
#include <windows.h>    // using system() function from this library
#include <cstdio>       // using getchar() from this library
using namespace std;

//Function to clearScreen and returns to Home Menu
int clearScreen(){
    cout<<"\nEnter Enter key to go to Home Menu.."<<endl;
    getchar();
    system("CLS");
    return 0;
}

//Function for Addition
int add(){
    system("CLS");
    float a,b;
    cout <<"\n*** SIMPLE CALCULATOR - Niraj Thakur***\n\n** ADD **\n";
    cout <<"Enter first number : ";
    cin >>a;
    cout <<"Enter second number ";
    cin >>b;
    cout <<"\nThe sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    getchar();
    clearScreen();
    return 0;
}

//function for subtraction
int subtract(){
    system("CLS");
    float a,b;
    cout <<"\n*** SIMPLE CALCULATOR - Niraj Thakur***\n\n** SUBTRACTION **\n";
    cout <<"Enter minuend : ";
    cin >>a;
    cout <<"Enter subtracted ";
    cin >>b;
    cout <<"\nThe subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
    getchar();
    clearScreen();
    return 0;
}

//Function for multiplication
int product(){
    system("CLS");
    float a,b;
    cout <<"\n*** SIMPLE CALCULATOR - Niraj Thakur***\n\n** MULTIPLICATION **\n";
    cout <<"Enter first number : ";
    cin >>a;
    cout <<"Enter second number ";
    cin >>b;
    cout <<"\nThe product of "<<a<<" and "<<b<<" is "<<(double)a*b<<endl;
    getchar();
    clearScreen();
    return 0;
}

//Function for division
int divide(){
    system("CLS");
    float a,b;
    cout <<"\n*** SIMPLE CALCULATOR - Niraj Thakur***\n\n** Divide **\n";
    cout <<"Enter dividend : ";
    cin >>a;
    cout <<"Enter divisor ";
    cin >>b;
    cout <<"\nThe quotient of "<<a<<" and "<<b<<" is "<<a/b<<endl;
    getchar();
    clearScreen();
    return 0;
}

// Function for invalid choice
int invalid(){
    system("CLS");
    float a,b;
    cout <<"\n*** SIMPLE CALCULATOR - Niraj Thakur***\n\nError: Invalid Choice!\n";
    getchar();
    clearScreen();
    return 0;
}

//Main function starts here
int main()
{
    int choice;
    do
    {
        cout<<"*** SIMPLE CALCULATOR - Niraj Thakur ***\n\n   Please select your choice\n\t1. ADD\n\t2. SUBTRACT\n\t3. MULTIPLY\n\t4. DIVIDE\n\t5. EXIT\n\n\nMade with Love By -  Niraj Thakur \(:"<<endl;
        cin>>choice;

        //Switch case starts
        switch(choice)
        {
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            product();
            break;
        case 4:
            divide();
            break;
        case 5:
            return 0;
            break;
        default:
            invalid();
            break;
        }                   // Switch case Ends
    }while(choice != 5);    //Do While Ends
    return 0;
}       //Main function Ends
