#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,pill,z=1;
	cin>>t;
	while(t--)
	{
		int a[102]={0};
		int n,c,akela=0,pil,ele;
		cin>>n;
		int count=0,j=1,harino=0;
		for(int i=0;i<n;i++)
        {
            cin>>ele;
            if(ele>=50)
                count++;

            else
            {
                a[j]=ele;
                j++;
            }
        }
        //printArray(a,n);
        n=j-1;
		sort(a+1,a+n+1);
        int i,sum;
        for(i=1;i<=n;i++,n--)
        {  pill= sum=a[n];
            int multiplier=2;
            while(pill<50)
            {
                pill=sum*multiplier;
                multiplier++;
                i++;
                //harino=5;
            }
            //i--;
            if(i<=n)
            	count++;
            else
               {};
            i--;


        }
     cout<<"Case #"<<z<<": "<<count<<endl;
     z++;

	}
	return 0;
}
