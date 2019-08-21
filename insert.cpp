#include<bits/stdc++.h>
#include<fstream>
#include<cstdio>
#include<string.h>
#include "insert.h"
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
            cout<<"Enter your Address : ";
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

void write_record()
{
    person obj;
    obj.setData();

    outFile.write((char*)&obj, sizeof(obj));

    outFile.close();
}
