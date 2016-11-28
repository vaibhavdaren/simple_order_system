#include <stdio.h>      /* printf */
#include <math.h>       /* sqrt */
#include <iostream>
using namespace std;
int main ()
{
int t;
cin>>t;
while(t--)
{
  int n,i;
  cin>>n;
  int a[]={100,50,10,5,2,1};
  int ans=0;
  for(i=0;i<6;i++)
  {
      int l=a[i];
      ans+=n/l;
      n=n%l;
  }
  cout<<ans<<endl;}
  return 0;
}

