#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,q1,m,n,a,b,i,j,k;
cin>>t;

while(t--)
{
    cin>>n>>m;
    int arr[n+1];
    int q[m];
    for(i=1;i<=n;i++)
        arr[i]=i;

     q1=m;
     while(q1--)
     {
         cin>>a;
         arr[a]=-1;
     }
     int k=1;
     int l=n-m+1;
     int b[l];
     for(j=1;j<=n;j++)
    {
            if(arr[j]!=-1)
                {
                    b[k]=arr[j];
                    k++;
                }
    }
      for(j=1;j<l;j++)
    {
         if(j%2!=0)
          cout<<b[j]<<" ";
    }
    cout<<endl;
          for(j=1;j<l;j++)
    {
         if(j%2==0)
          cout<<b[j]<<" ";
    }
    cout<<endl;

}
}
