#include <iostream>
#include<string.h>
using namespace std;
int fun(long long int n)
{
    int val=0;
    while(n>0)
		{

		val=val+n%10;
		n=n/10;
		}
return val;
}

int main()
{
	long long int n;

	while(1){
    cin>>n;
	if(n==0){break;}
	else
	{

		int val=fun(n);
		do
		{
            val=fun(val);
		}while(val>10);

		cout<<val<<endl;
	}}
    return 0;
}
