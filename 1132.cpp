#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	long long int n;
	while(t--)
	{
		cin>>n;
		int val=0;
		do
		{
		while(n>0)
		{

		val=val+n%10;
		n=n/10;
		}
		}while(n>10);
		cout<<val<<endl;
	}
    return 0;
}
