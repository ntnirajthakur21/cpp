#include <iostream>
using namespace std;
int main()
{
    int num[20],sum=0;
    for(int i=0;i<20;i++){
        cout<<"Enter number "<<i+1<<"-\> ";
        cin>>num[i];
        sum=sum+num[i];
    }
    cout <<"\n-----------------------------\nThe total sum is -\>"<<sum<<"\n-----------------------------\n";
    return 0;
}
