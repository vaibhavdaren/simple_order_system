#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	//code
	int t,n,i,s=0;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	     for(i=0;i<n;i++)
	        s+=a[i];
	  cout<<s<<endl;
	}
	return 0;
}
