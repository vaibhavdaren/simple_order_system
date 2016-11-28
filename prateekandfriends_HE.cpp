#include <iostream>
using namespace std;

int main()
{
	int t;
	int c;
	int f1=0;
	cin>>t;
	int n,i,j,p,val;
	while(t--)
	{	f1=0;
		c=0;
		cin>>n>>p;
		int a[p];
		for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
			j=0;
		for(i=0;i<n;i++)
			{
				val=0;
				for(j=i;j<n;j++)
					{
					val=val+a[j];
			if(val==p)
			{
				cout<<"YES"<<endl;
				f1=1;
				break;
			}

					}
			}

		if(f1==0)
			{
				cout<<"NO"<<endl;
			}
	}
    return 0;
}
