#include <iostream>
using namespace std;

int main()
{
	long int t;
	long long int n,j,i,f;

	cin>>t;
	while(t--)
	{	cin>>n;
		int a[n];
		for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
		for(i=0;i<n;i++)
			{
				f=0;
				for(j=i+1;j<n;j=j+1)
					{
						if(a[i]>a[j])
							{
								f++;
							}


					}
			cout<<f<<" ";
			}
		cout<<endl;
	}

    return 0;
}
