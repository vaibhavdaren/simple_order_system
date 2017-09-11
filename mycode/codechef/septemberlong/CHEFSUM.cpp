#include<iostream>
using namespace std;
int main()
{
    int n,t,a,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        int pre[n];
        int suff[n];
        for(i=0;i<n;i++)
            cin>>a[i];

        s=pre[0]=a[0];
        for(i=1;i<n;i++){
            {
            s=s+a[i];
            pre[i]=s;

            }

        }
    }

}
