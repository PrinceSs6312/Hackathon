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
printf("\nThe following questions make up the standardised test result.");
printf("\nThese are your options for each question: ");
printf("\n");
printf("\n\t\t1) "7" Not at all.");
printf("\n\t\t2) "8" Partly.");
printf("\n\t\t3) "9" A lot.");
printf("\n\t\t4) "10" To a great extent.");
printf("\n");
printf("\nFor each of the following question, enter a number corresponding to the above list."); 
printf("\n1) I do everywork slowly. ");
scanf("%d", &a[0]);
printf("\n2) I do exercises regularly. ");
scanf("%d", &a[1]);
printf("\n3) I breathe normally while working. ");
scanf("%d", &a[2]);
printf("\n4) I have sometime fear and depression. ");
scanf("%d", &a[3]);
printf("\n5) I find it hard to make decisions. ");
scanf("%d", &a[4]);
printf("\n6) My sleep is disturbed: too little, too much, or disturbed sleep. ");
scanf("%d", &a[5]);
printf("\n7) I have lost or gained weight. ");
scanf("%d", &a[6]);

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
