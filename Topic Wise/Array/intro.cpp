#include <iostream>
using namespace std;
int main(){

    int a[2][2] = 
    { 
        {1, 2},
        {3, 4}
    };

    int b[2][2] =
    {
        {5,6},
        {7,8}
    };

    int c[2][2]=
    {
        {a[0][0] + b[0][0],  a[0][1]+ b[0][1]},
        {a[1][0] + b[1][0], a[1][1] + b[1][1]}
    };

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<c[i][j]<<"\t";
        }
        cout <<"\n";
    }

    cout <<" transpose of c is\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<c[j][i]<<"\t";
        }
        cout <<"\n";
    }
    return 0;
}