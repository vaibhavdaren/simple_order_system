#include<iostream>
using namespace std;
int main()
{int a,b,t;
cin>>t;
while(t--)
{
    int n;
cin>>n;
a=n%10;
while(n>0)
{
b=n%10;
n/=10;
}

cout<<a+b<<endl;}
return 0;
}
