#include<iostream>
using namespace std;
int main()
{
int t,a,b,i;
cin>>t;

while(t--)
{
cin>>a>>b;
 i=0;
int c=max(a,b);
while(1)
{
i++;
if(i%2!=0)
{
    if(a-i<0)
    {
        cout<<"Bob"<<endl;

    break;
    }
    else
    {
    a=a-i;
    }
}
if(i%2==0)
{
    if(b-i<=0)
    {
            cout<<"Limak"<<endl;

    break;
    }

    else
    {
    b=b-i;
    }
}
}
}
}
