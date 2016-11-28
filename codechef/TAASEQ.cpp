#include<iostream>
#include<alogorithm>
using namespace std;
int main()
{
    int i,j,t,n,b,m,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n>>b>>m;
        while(n>0)
        {
            if(n%2==0)
            {
                ans+=n/2*m;
                ans+=b;
                m=m*2;
                n=n-n/2;
            }
            else if(n%2!=0)
            {
                ans+=(n+1)/2*m;
                ans+=b;
                m=m*2;
                n=n-(n+1)/2;
            }

        }
        cout<<ans-b<<endl;
    }
}

