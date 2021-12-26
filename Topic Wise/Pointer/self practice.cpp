#include <iostream>
using namespace std;
class box
{
private:
    float length,breadth,height;
public:
   void getdata()
   {
       cout<<"Enter length : ";
       cin>>length;
       cout<<"Enter breadth : ";
       cin>>breadth;
       cout<<"Enter height : ";
       cin>>height;
   }
   void showdata()
   {
       cout<<"\nlength = "<<length;
       cout<<"\nbreadth = "<<breadth;
       cout<<"\nheight = "<<height;
   }
   void area();
};
void box::area()
{
    cout<<"\nThe area = "<<length*breadth;
}

int main()
{
    box Deepak;
    Deepak.getdata();
    Deepak.showdata();
    Deepak.area();
    return 0;
}
