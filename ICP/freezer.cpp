#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int a,b;
float f,t,l;
cin>>a>>b;
f=a+b/60.0;
t=((4.0*f*f)/(f+2.0))-20;
printf("%9.2f",t);
}
