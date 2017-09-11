#include <bits/stdc++.h>
using namespace std;
/*void rvereseArray(int arr[], int start, int end)
{
   int temp;
   if (start >= end)
     return;
   temp = arr[start];
   arr[start] = arr[end];
   arr[end] = temp;
   rvereseArray(arr, start+1, end-1);
}
void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);

  printf("\n");
}*/
int main()
{
	int t,pill;
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
            /*else if(ele>=25)
            {
                harino++;
                count++;
            }*/
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
        {   sum=a[n];
            int multiplier=2;
            while(sum<50)
            {
                sum=sum*multiplier;
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
    cout<<count<<endl;

	}
	return 0;
}
