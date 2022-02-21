/*
    CRUD operation performed in file data
    --------------------------------------

*/


#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
using namespace std;

class Book
{
private:
    int ID;
    char name[10];
    int nop;
    float price;
public:
    void readData()
    {
        cout<<"Enter ID : ";
        cin>>ID;
        cout<<"Enter name of book : ";
        cin>>name;
        cout<<"Enter number of pages : ";
        cin>>nop;
        cout<<"Enter price of book : ";
        cin>>price;
    }

    void displayData()
    {
        cout.setf(ios::left,ios::adjustfield);
        cout.width(10);
        cout<<ID;
        cout.width(20);
        cout<<name;
        cout.width(20);
        cout<<nop;
        cout.width(20);
        cout<<price;
        cout<<"\n";
    }

    int getID(){return ID;}
};

void ListHeader();

int main()
{
    Book b[100];
    int roll;
    fstream file("book.txt",ios::out | ios::binary | ios::in | ios::app | ios::ate);

    char choice;
    bool terminate = false;

    do
    {
        system("cls");
        cout<<"CRUD OPERATION OF FILE DATA"<<endl;
        cout<<" Written by : Niraj Thakur"<<endl;
        cout<<"\n   SELECT YOUR CHOICE"<<endl;
        cout<<"\t1.\tList All Entry"<<endl;
        cout<<"\t2.\tAdd New Entry"<<endl;
        cout<<"\t3.\tSearch From Entry"<<endl;
        cout<<"\t4.\tUpdate An Entry"<<endl;
        cout<<"\t5.\tDelete An Entry"<<endl;
        cout<<"\t6.\tExit"<<endl;
        cout<<"------------------------------"<<endl;

        cout<<"\nEnter Your Choice : ";
        cin>>choice;

        switch(choice)
        {
        case '1':
            system("cls");
            if(!file)
            {
                cout<<"Problem opening file ....";
                exit(0);
            }
            for(int i=0; i<100; i++)
            {
                file.read((char *)&b[i],sizeof(b[i]));
                if(file.bad()){break;}
            }
            ListHeader();
            for(int i=0; i<10; i++)
                b[i].displayData();
            cout<<"-------------------------------------------------------\n";
            getch();
            break;
        case '2':
            system("cls");
            cout<<"Reading records for book ..."<<endl;
            b[0].readData();
            fstream file("book.txt", ios::out | ios::binary);
            file.seekp(0,ios::end);
            file.write((char *)&b[0], sizeof(b[0]));
            if(file.bad()){cout<<"Problem adding record...."<<endl;}
            else{cout<<"Data Added Successfully....."<<endl;}
            getch();
            break;
        case '3':
                cout<<"Enter student roll no : ";
                cin>>roll;
                if(file.fail()){cout<<"Error while opening file "<<endl;}
                file.seekg(0,ios::beg);
                file.read((char *)&b[0],sizeof(b[0]));
                if(file.good())
                {
                    bool isFound = false;
                    while(file.eof() == 0)
                    {
                        if(b[0].getID() == roll)
                        {
                            ListHeader();
                            s1.displayData();
                            cout<<"-------------------------------------------------------\n";
                            isFound = true;
                            break;
                        }
                        file.read((char *)&b[0],sizeof(b[0]));
                    }
                    if(!isFound){cout<<"Data not found "<<endl;}
                }
                else{ cout<<"Error reading data from file "<<endl;}
            break;

        case '4':
                cout<<"Enter student roll no : ";
                cin>>roll;
                if(file.fail()){cout<<"Error while opening file "<<endl;}
                file.seekg(0,ios::beg);
                file.read((char *)&b[0],sizeof(b[0]));
                if(file.good())
                {
                    int recordNum = 0;
                    bool isFound = false;
                    while(file.eof() == 0)
                    {
                        recordNum++;
                        if(s1.getID() == roll)
                        {
                            s1.readData();
                            file.clear();
                            int location = (recordNum - 1) * sizeof(s1);
                            file.seekp(location,ios::beg);
                            file.write((char *)&b[0],sizeof(b[0]));
                            if(file.good()){cout<<"Data updated successfully..."<<endl;}
                            isFound = true;
                            break;
                        }
                        file.read((char *)&b[0],sizeof(b[0]));
                    }
                    if(!isFound){cout<<"Data not found "<<endl;}
                }
                else{ cout<<"Error reading data from file "<<endl;}
                getch();

            break;

        default:
            cout<<"Invalid Input"<<endl;
            getch();
        }
    }while(!terminate);


    return 0;
}//End of main Function


void ListHeader()
{
    cout<<"-------------------------------------------------------\n";
    cout.setf(ios::left,ios::adjustfield);
    cout.width(10);
    cout<<"ID";
    cout.width(20);
    cout<<"Book Name";
    cout.width(20);
    cout<<"No. of Pages";
    cout.width(20);
    cout<<"Price";
    cout<<"\n";
    cout<<"-------------------------------------------------------\n";
}
