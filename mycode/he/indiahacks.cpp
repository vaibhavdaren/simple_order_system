#include<iostream>
using namespace std;
int n;
int checkpossible1C(int a[],int l[],int r[],int i)
{
    int j=i-l[i]-1;
    if(j>=0)
    while(j--)
    {
        if(a[j]==1)
            return 1;
    }
    for(j=n-1;j>=i+r[i]+1;j--)
    {
        if(a[j]==1)
            return 1;
    }
     return 0;
}

int main()
{
int i;
cin>>n;
int a[n];
int l[n]={0};
int r[n]={0};
for(i=0;i<n;i++)
    cin>>a[i];
int flag=0;

int pre=0;
for(i=0;i<n;i++)
{
if(a[i]==1)
    pre++;
if(a[i]==0)
    {
    l[i]=pre;
    pre=0;
    }
}
if(pre==n)
{
    flag=1;
}
int suf=0;
for(i=n-1;i>=0;i--)
{
if(a[i]==1)
    suf++;
if(a[i]==0)
    {
    r[i]=suf;
    suf=0;
    }
}
int m=-1;
for(i=0;i<n;i++)
{
int p=0;
p=checkpossible1C(a,l,r,i);
//cout<<"dangling 1 : "<<p<<endl;
m=max(m,(l[i]+r[i]+p));
}
if(flag==1)
{
    cout<<n;
}
else
cout<<m<<endl;
}
