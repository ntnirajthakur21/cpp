#include <iostream>
#include <string>
using namespace std;

class Instrument
{
  private:
  	static int object_count;
    int instrument_id;
    string instrument_name;
    string customer_name;
    string customer_phone;
    long customer_PAN;

public:
  //Parameterized constructor
  Instrument(string inst_name)
  {
    object_count += 1;
    instrument_name = inst_name;
    instrument_id = object_count;
    customer_name = "";
    customer_phone = "";
    customer_PAN = 0;
  }

  void display_id()
  {cout<<"Instrument id is "<<instrument_id<<endl;}

  void display_name()
  {cout<<"Instrument Name is "<<instrument_name<<endl;}

  void display_customer_Name()
  {cout<<"Customer Name is "<<customer_id<<endl;}

  void display_customer_Phone()
  {cout<<"Customer Phone is "<<customer_phone<<endl;}

  void display_customer_PAN()
  {cout<<"Customer PAN is "<<customer_PAN<<endl;}

  void display()
  {
    cout<<"*********************************"<<endl;
    cout<<"Instrument Id = "<<instrument_id<<endl;
    cout<<"Instrument Name = "<<instrument_name<<endl;
    if(customer_name.length() != 0)
        cout<<"Customer Name ="<<customer_name<<endl;
    if(customer_phone.length() != 0)
        cout<<"Customer Phone ="<<customer_phone<<endl;
    if(customer_PAN != 0)
        cout<<"Customer PAN ="<<customer_PAN<<endl;
  }

};

//Defination of static data member
int Instrument::object_count;

//Main function
int main() 
{
  Instrument i1("laptop"), i2("phone");
  i1.display();
  i2.display();
  return 0;
}
