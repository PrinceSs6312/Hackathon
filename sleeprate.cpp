#include <bits/stdc++.h>
#include <iostream>
#include <fstream> 
#include"sleep.h"
using namespace std;

void sleeprate()
{
int trimester;
cin>>

/*for(i=0;i<10;i++) 
{
    sum = sum + a[i] - 1; 
}
*/


if(trimester==1)
{
if(sleeprate<=6 && sleeprate>=5)
{
    printf("\n\NORMAL");
}
else 
{
    printf("\nSLEEP NOT NORMAL");
}
}
else if(trimester==2)
{
if(sleeprate<=8 && sleeprate>=7)
{
    printf("\nNORMAL");
}
else 
{
    printf("\nSLEEP NOT NORMAL");
}
}

else if(trimester==3)
{
if(sleeprate<=5 && sleeprate>=4)
{
    printf("\nNORMAL");
}
else 
{
    printf("\nSLEEP NOT NORMAL");
}
}


printf("\n");
    
fout<<sleeprate;
    
fout<<trimester;
fout<<"\n";

fout.close();

};
