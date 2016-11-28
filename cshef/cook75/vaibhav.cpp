#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int t,n,i,j,k;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
int flag=0;
for(i=0;i<n-1;i++)
{
if(a[i+1]-a[i]==-1||a[i+1]-a[i]==1||a[i+1]-a[i]==0)
flag=1;
else
{
flag=0;
break;
}
}
if(flag==0)
    cout<<"NO"<<endl;
else
    cout<<"YES"<<endl;
}
return 0;
}
