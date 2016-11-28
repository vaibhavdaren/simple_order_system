#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long int
bool bsearch(int AR[], int N, int VAL)
{
	int Mid,Lbound=0,Ubound=N-1;
	while(Lbound<=Ubound)
	{
		Mid=(Lbound+Ubound)/2;
		if(VAL>AR[Mid])
			Lbound=Mid+1;
		else if(VAL<AR[Mid])
			Ubound=Mid-1;
		else
			return true;
	}
	return false;
}
int main()
{
    int arr[100],i;
    for(i=1;i<100;i++)
        arr[i]=i*i*i;
    for(i=0;i<100;i++)
        cout<<arr[i]<<endl;
    int t;
    cin>>t;
    while(t--)
    {
        int a,c;
        cin>>a>>c;
        int n=a*a*a-c;
        int flag=0;
        for(i=0;i<=100;i++)
        {   int l=i*i*i+n;
            cout<<"curr l is: "<<l<<endl;
            if (bsearch(arr,100, l)) {
                    cout<<"here";
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}

