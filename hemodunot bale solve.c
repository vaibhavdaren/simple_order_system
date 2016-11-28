#include <iostream>
using namespace std;

int main()
{
	int a,b,c,n;
	cin>>a>>b>>c>>n;
	int i;
	int A[n],B[n];
	A[1] = a*c;
for(i=2 ; i<=n ; i++)
{
    A[i] = A[i-1]*a*b*c + A[i-1]*a*b + A[i-1]*a*c;
    A[i] = A[i]%1000000007;
}
B[1] = b*c;
for(i=2 ; i<=n ; i++)
{
    B[i] = B[i-1]*b*c*a + B[i-1]*b*a + B[i-1]*b*c;
    B[i] = B[i]%1000000007;
}

	int j;
	int sum=A[1]+B[1];

for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			{
				if(i!=j)
				{
				int l=A[i]+B[j];
				if(l<sum)
					{
						sum=l;
					}

				}
			}

	}
 cout<<sum;



	return 0;
}
