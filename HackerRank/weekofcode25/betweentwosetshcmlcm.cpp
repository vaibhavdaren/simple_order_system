#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{

 long long int i,j,k,t,n,l,s;
 scanf("%lld",&t);

 while(t--)
 {
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);

    sort(a,a+n);
    l=a[0]*a[1];
int k=0;
i=0;
j=i+1;
    while(i<n-1)
    {
        j=i+1;
        while(j<n)
      {

       if(a[j]%a[i]==0)
       {
           k=1;
           s=a[j];

           i=n-1;
           j=n;

       }

      j++;
      }
      i++;
 }
 l=a[0]*a[1];
 if(k==0)
    {
        cout<<l<<"\n";
    }
 else
 {
     if(l>s)
 cout<<s<<"\n";
 else
    cout<<l<<"\n";
 }
 }
return 0;
}
