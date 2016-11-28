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
  int n;
  cin>>n;
  int a=11;
  int ans=0;
  while(a--)
  {
      int l=pow(2,a);
      ans=n/l;
      n=n%l;
      a--;
  }
  cout<<ans<<endl;}
  return 0;
}
