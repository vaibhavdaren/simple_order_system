#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int c,d,l;
		cin>>c>>d>>l;
		long long int cl=c-2*d;
		if(cl<0)cl=0;
		if(l%4!=0)cout<<"no\n";
		else
		{
			if(l>=(4*d+4*cl) && l<=(4*d+4*c))
			cout<<"yes\n";
			else
			cout<<"no\n";
		}
	}
	return 0;
}
