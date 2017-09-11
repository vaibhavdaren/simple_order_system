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
        int arr[n+1];
        for(j=1;j<=n;j++)
            cin>>arr[j];
        if(n%2!=0)
        {
            bool flag=true;
            for(j=1;j<=(n/2+1);j++)
            {
                if(arr[j]!=j)
                    flag=false;
            }
            if(flag==false)
                cout<<"no\n";
            else
                cout<<"yes\n";
        }
        else
            cout<<"no\n";
    }
}
