#include <bits/stdc++.h>
#include <iostream>
#include <fstream> 
#include"calories.h"
using namespace std;

void Calories()
{
cin>>calories;
if(trimester==1)
{
if(calories<=1900 && calories>=1700)
{
    printf("\n\NORMAL");
}
else 
{
    printf("\nCALORIES NOT NORMAL");
}
}
else if(trimester==2)
{
if(calories<=2200 && calories>1900)
{
    printf("\nNORMAL");
}
else 
{
     printf("\nCALORIES NOT NORMAL");
}
}

else if(trimester==3)
{
if(calories<=2400 && calories>2200)
{
    printf("\nNORMAL");
}
else 
{
    printf("\nCALORIES NOT NORMAL");
}
}


printf("\n");
    
fout<<calories;
    
fout<<trimester;
fout<<"\n";

fout.close();

};

