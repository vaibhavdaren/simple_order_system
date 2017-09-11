#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	int n,b,i,l,c=0,a;
	while(t--)
	{
	    c=0;
	    cin>>l>>n;
	    int vis[n+1]={0};
	    while(l--)
	    {
	        cin>>a>>b;
	        vis[a]=1;
	        vis[b]=-1;
	    }
	    int flag=0;
	    for(i=1;i<=n;i++)
	    {
	        if(vis[i]==1&&flag==0)
	            {
	                flag=1;
	            }
	        if(vis[i]==-1&&flag==1)
	            {
	                flag=0;
	            }
	        if(vis[i]==0&&flag==0)
	            c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
