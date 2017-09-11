#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin>>s;
    int i,j,k,n;
    for(i=0;i<s;i++)
    {
    	bool flag=true;
        cin>>n;
        if(n%2!=0)
        {
            for(j=1;j<=(n/2+1);j++)
            {
                cin>>k;
                if(k!=j)
                {
                    flag=false;
                }
            }
            for(j=n/2;j>=1;j--)
            {
                cin>>k;
                if(k!=j)
                {
                    flag=false;
                }
            }
            if(flag)
            	cout<<"yes\n";
            else
            	cout<<"no\n";
        }
        else
            cout<<"no\n";
    }
}
