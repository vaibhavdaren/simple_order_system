#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
    int k;
    cin>>k;
    char s[n+1];
    cin>>s;
    int a[n+1];
    for(i=1;i<=n;i++)
        a[i]=s[i-1]-'0';
    while(k--)
    {
        int x;
        cin>>x;
        int sum1=0,sum2=0;
        int b;
        for(i=1;i<x;i++)
        {
            b=a[x]-a[i];
            if(b>0)
                sum1+=b;
            else
                sum2+=b;

        }
        cout<<sum1-sum2<<endl;
    }
    return 0;
}
