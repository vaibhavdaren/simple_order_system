#include <stdio.h>
#include<iostream>
using namespace std;

long int sumo(long int n)
{
    int l=0;
while(n>0)
    {
       if(n%2==0)
       {
           l++;
           n=n/2;
       }
       else
            break;
    }
    return l;
}
int main()
{
    int t=5;
while(t--){
int v;
cin>>v;
cout<<sumo(v)<<endl;
}
return 0;
}
