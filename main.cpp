#include <iostream>
#include <fstream> // library responsible for adding files

using namespace std;

string name, lastname;
int phonenumber;

int main()
{
    cout<<"This program takes an input of name, last name and phone number and saves it into file"<<endl;
    cout<<"Give a name: "<<endl;
    cin>>name;
    cout<<"Give a last name: "<<endl;
    cin>>lastname;
    cout<<"Give phone number: "<<endl;
    cin>>phonenumber;

    fstream file;
    file.open("card.txt", ios::out | ios::app);

    file<<name<<endl;
    file<<lastname<<endl;
    file<<phonenumber<<endl;

    file.close();

    cout<<"\nPress any key to exit";
    getchar();
    getchar();
   return 0;
}
