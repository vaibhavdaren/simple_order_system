#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,j,m;
		int n,k;
		int a[n];
		int b[k];

		for(i=1;i<=n;i++)
		cin>>a[i];
			m=0;
		for(i=n-k;i<=n;i++){
			b[m]=a[i];
			m++;
		}
		int m2=0;
		for(i=n-k-1;i>=1;i--)
			{
				a[m2]=a[i];
				m2--;
			}
		for(i=0;i<n;i++)
		cout<<a[i];
	}
    return 0;
}
