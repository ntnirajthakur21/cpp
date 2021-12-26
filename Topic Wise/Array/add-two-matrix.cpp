// WAP To add two matrix in c++
// The program is written by - Niraj Thakur
#include <iostream>
using namespace std;
void takeInput(int matrix[][10], int row, int column){
    for(int i=0; i<row; i++){
            cout<<"\t Enter row "<<i+1<< " : "<<endl;
        for(int j=0; j<column; j++)
            cin>>matrix[i][j];
    }
}
int main()
{
    int A[10][10], B[10][10], sum[10][10], row, column;
    cout <<"C++ Program to add two matrix\n**Max size of Matrix is 2*2**\n"<<endl;
    cout <<"Enter the size of Matrix : Rows = ";
    cin >>row;
    cout <<"Enter the size of Matrix : Column = ";
    cin >>column;
    cout <<"Enter first matrix "<<endl;
    takeInput(A,row,column);
    cout <<"Enter second matrix "<<endl;
    takeInput(B,row,column);
    //Calculates the sum of Matrix
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++)
            sum[i][j] = A[i][j] + B[i][j];
    }
    //Display the result
    cout<<"\n\n The sum is \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++)
            cout<<sum[i][j]<<"\t";
            cout<<"\n";
    }
    return 0;
}
