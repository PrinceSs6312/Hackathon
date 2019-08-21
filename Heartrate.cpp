#include <bits/stdc++.h>
#include <iostream>
#include <fstream> 
#include"Heart.h"
using namespace std;

void Heartrate()
{
int a[10], i;
int sum = 0;
cin>>heartrate;

   for(i=0;i<10;i++) 
{
    sum = sum + a[i] - 1; 
}


if(sum>=70 && sum<80)
{
    printf("\n\Heartrate unlikely to happen.");
}
else if(sum>=80 && sum<90)
{
    printf("\n\nPossible minor Heartrate Risk.");
}
else if(sum>=90)
{
    printf("\n\nOn the verge of Heartrate Risk.");
}

else if(sum>100)
{
    printf("\n\nSevere Heartrate Risk.");
}


printf("\n");
    
fout<<heartrate;
    
fout<<sum;
fout<<"\n";

fout.close();

};
