#include <math.h>
#include <sstream>
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main(void)
{

int i,j;
int t;
cin>>t;
string person[t];
for(i=0;i<t;i++)
{
    cin>>person[i];
}
 string line = "Happy birthday to you Happy birthday to you Happy birthday to Rujia Happy birthday to you";
    string arr[16];
     i = 0;
    stringstream ssin(line);
    while (ssin.good() && i < 16){
        ssin >> arr[i];
        ++i;
    }
j=0;
if(16>t)
{
    for(i=0;i<16;i++)
    {
        if(j==t)
            {
                j=0;
            }
    cout<<person[j]<<": "<<arr[i]<<endl;
    j++;
}
}
if(t>16)
{
    j=0;
     for(i=0;i<16;i++)
    {
    cout<<person[j]<<": "<<arr[i]<<endl;
    j++;
    }
    for(i=0;i<16;i++)
    {
        if(j==t)
            {
                j=0;
            }
    cout<<person[j]<<": "<<arr[i]<<endl;
    j++;

    }
}
return 0;
}
