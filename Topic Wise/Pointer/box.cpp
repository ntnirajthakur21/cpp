#include <iostream>
using namespace std;
class box
{
private:
    float length,breadth,height;
    public:
    void get data()
    {
        cout<<"enter length"
        cin>>length;
        cout<<"enter breadth";
        cin>>bredth;
        cout<<"enter height";
        cin>>height;
    }

    void show data()
    {
        cout<<"length="<<length;
        cout<<"breadth="<<breadth;
        cout<<"height="<<height;
    }
    void area();
};
void box::area()
{
    cout<<"the area="<<length*breadth*height;
}
int main()
{
    box.Deepak;
    Deepak.get data();
    Deepak.show data();
    Deepak.area();
    return 0;
}
