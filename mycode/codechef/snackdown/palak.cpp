#include<iostream>
using namespace std;
int a[2][100001];
int main()
{
int i,j;
int n,count;int t;
cin>>t;
while(t--)
{
cin>>n;
count=0;
for(i=0;i<2;i++)
{
for(j=0;j<n;j++)
{
cin>>a[i][j];
}
}
for(i=1;i>=0;i--)
{
for(j=n-1;j>=0;j--)
{
//cout<<a[i][j];

if(count==(n*2)/2)
    i--;
else
{
if(a[i][j]==int('*'))
{
if(a[i-1][j]==int('*') || a[i][j-1]==int('*') || a[i-1][j-1]==int('*'))
{
a[i][j]=int('.');
count++;
//cout<<count<<endl;
}
}
}
}
}
cout<<count<<endl;
}
return 0;
}
