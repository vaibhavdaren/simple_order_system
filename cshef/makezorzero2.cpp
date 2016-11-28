#include<iostream>
using namespace std;
int main()
{
int t,i,j,k,l,c1,c0;
cin>>t;
while(t--)
{
int l;
cin>>l;
char s[l];
cin>>s;
c1=0;c0=0;
for(i=0;i<l;i++)
{
if(s[i]=='1')
{
    c1++;
}
else
    c0++;
}
if(c1%2!=0)
{
 cout<<c1<<endl;
}
else
 cout<<c0<<endl;
}
return 0;
}
