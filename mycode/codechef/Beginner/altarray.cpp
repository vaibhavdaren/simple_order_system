#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		long long int a[n],i;
		for(i=0;i<n;i++)
			scanf("%d",a+i);
		int ans[n];
		ans[n-1] = 1;
		for(i=n-2;i>=0;i--)
		{

			if((a[i]>0)&&a([i+1]>0))
                ans[i] = 1;
        	else
        		ans[i] = ans[i+1]+1;

		}
		for(i=0;i<n;i++)
			printf("%d ",ans[i]);
		printf("\n");
	}
	return 0;
}
