#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main()
{
    string x,a,y;
    int t,l,i=0,j,c=0;
    scanf("%d",&t);
    while(t--)
    {   c=0;
        cin>>a;
        l=a.length();
       for(i=0;i<l-1;)
        {
         if(a[i]=='0'&&a[i+1]=='1')
         {
             i++;
         }
         else if(a[i]=='1'&&a[i+1]=='0')
            i++;
         else if(a[i]==a[i+1])
         {c++;
         i++;
         }
         else
         {
             i++;
         }
        }
        cout<<c<<endl;
        }
}
