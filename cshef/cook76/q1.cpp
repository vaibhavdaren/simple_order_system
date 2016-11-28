#include<iostream>
using namespace std;
#define ll long long int

int main()
{
    int n,t,l,s,x,y,z,a,b,c,d,e,f,k,j,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>n;
        int N=n;
        int X=0,Y=0;int ans=0;
        for(i=1;i<=n;i++)
        {

        for(j=1;j<=n;j++)
        {

            if(i*j==((i|j)*(i&j)+a*i+b*j+c))
            {
                X+=i;
                Y+=j;
            }
        }

    }
    cout<<X<<" "<<Y<<endl;
    }

    return 0;
}
