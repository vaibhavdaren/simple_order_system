#include<iostream>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    float t,s,sg,fg,m,tc,d;
    cin>>tc;
    while(tc--)
    {
        cin>>s>>sg>>fg>>d>>t;
        float  v=180*d+s*t;
        v=v/t;
        int l1=abs(v-sg);
        int l2=abs(v-fg);
        if(l1<l2)
            cout<<"SEBI"<<endl;
        else if(l1==l2)
            cout<<"DRAW"<<endl;
        else
            cout<<"FATHER"<<endl;
    }
}
