#include<iostream>
using namespace std;
class Demo{                     //Class declaration & Initialization
private:                        //Access Modifier
    char message[20]="hello";    //Private Data Member 1

public:                         //Access Modifier
    void displayMessage(){      //Public Member
        cout<<message<<endl;
    }
};                              //Closing of Class
int main(){                     //Starting of main Function
    Demo d1;                    //Creating Object For Class Demo => syntax:   class_name object_name;
    d1.displayMessage();        //Accessing Members of class for object d1 => syntax:   object_identifier.member_identifier;
    return 0;
}
