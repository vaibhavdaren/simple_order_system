#include <iostream>
using namespace std;
#define ll long long int
int t,n,c,i,j,k,l;
int main()
{

	cin>>n;
	int a[n];
	int b[n];
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	cin>>b[i];
	}
	int j,m,p;
	for(i=0;i<n;i++)
	    {
	        p=b[i];
	        for(j=0;j<n;j++)
	            {
	                if(a[i]==a[j])
	                    {
	                        p=max(b[i],b[j]);
	                    }
	            }
	            cout<<p<<" ";
	    }
	    cout<<endl;
    //cout << "Hello World!" << endl;
    return 0;
}
