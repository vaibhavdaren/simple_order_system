//snakques1
#include<iostream>
using namespace std;
int main()
{
    int t,n,m,p,a,b,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<m;i++)
            cin>>a>>b;
        p=n-(2*m);
        if(p%2==0)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}
