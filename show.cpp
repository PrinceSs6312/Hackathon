#include<bits/stdc++.h>
#include<fstream>
#include<cstdio>
#include<string.h>
#include "show.h"
using namespace std;

class person
{
    int age;
    char address[50];
    public:
        void setData()
        {
            cout << "\nEnter your age ";
            cin >> age;
            cout<<"Enter your address : ";
            cin>>address;
        }

        void showData()
        {
            cout << "\nAge : " << age;
            cout << "\nAddress : " << address;
        }

        string address()
        {
            return address;
        }
};

void display()
{
    getchar();
    system("clear");

    person obj;
    cout<<"\n";

    while(inFile.read((char*)&obj, sizeof(obj)))
    {
        obj.showData();
        cout<<"\n";
    }

    inFile.close();
}
