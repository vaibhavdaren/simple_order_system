#include<iostream>
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
            if(n==4)
            {
                ans+=2*m+b+2*2*m*1+b+2*2*2*m*1;
                break;
            }
            else if (n==3){
                ans+=2*m+b+1*2*m;
                break;}
            else if(n==2)
            {
                ans+=m+b+2*m;
                break;
            }

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
        cout<<ans<<endl;
    }
}
