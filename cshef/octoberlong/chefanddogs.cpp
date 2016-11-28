#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
    double t,s,v;
    cin>>t;
    while(t--)
    {
        cin>>s>>v;
        double i=((2.0/3.0)*(s))/v;
        cout.precision(9);
        cout<<fixed<<i<<endl;
    }
}
