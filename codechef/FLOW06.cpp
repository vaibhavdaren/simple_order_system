#include<algorithm>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    long long int n;

    while(t--)
    {  int sum=0;
        cin>>n;
        while(n>0)
            {
                int l=n%10;
                sum=l+sum;
                n=n/10;
            }
            cout<<sum<<endl;
    }
	return 0;
}
