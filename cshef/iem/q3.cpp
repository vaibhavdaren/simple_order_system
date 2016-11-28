#include<iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int i,c=0,j,m=0,n;
    string s,a;
    cin>>s;
    a=s;
    int l=s.length();
    cout<<a<<endl;
    for(i=1;i<n;i++)
    {
        if(a[i]=='I'&&(a[i-1]=='I'||i==0))
            c++;
        if(a[i]=='E'&&a[i-1]=='I')
            c++;
        if(a[i]=='E'&&(a[i-1]=='E'))
            c++;
        if(a[i]=='M'&&a[i-1]=='E')
            c++;
        if(a[i]=='M'&&a[i-1]=='M')
            c++;

       else
       {
           cout<<c;
           m=max(c,m);
           c=0;
           cout<<m;
       }
    }
    cout<<m;
    return 0;

}

