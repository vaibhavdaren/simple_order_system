#include<iostream>
using namespace std;
int main()
{
int n,a,b,p,q,e,ctr=0;
cin>>n>>a>>b;
while(n--)
{
cin>>e;
if(e==1)
    {
    if(a>0)
        a--;
    else if(a==0&&b>0)
    {
        a++;
        b--;
    }
    else
    {
        ctr++;
    }
    }
else
{
    if(b==0)
    {
        ctr=ctr+2;
    }
    else
    {
        b--;
    }
}
}
    cout<<ctr<<endl;
return 0;
}
