#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;
#include <stdio.h>
int main(void) {
	int t;
	cin>>t;
		while(t--)
	{
		long long int n,k,result=1;
		cin>>n>>k;
		n--,k--;
	    long long int min=(k)>(n-k)? (n-k):(k);
		int i;
		for(i=1;i<=min;i++)
		{
			result=result*(n-i+1)/i;

		}
            cout<<result<<endl;
	}
	return 0;
}
