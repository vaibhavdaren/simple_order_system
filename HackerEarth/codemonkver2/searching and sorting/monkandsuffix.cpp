#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int l=s.length();
	int k;
	cin>>k;
	string arr[l];
	int i;
	int n=l;
	string temp;
	for(i=0;i<n;i++)
		{
			temp=s.substr(i,l);
			arr[i]=temp;
		}

    sort(arr,arr+n);
    cout<<arr[k-1];
   return 0;
}
