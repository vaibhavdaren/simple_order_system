#include <bits/stdc++.h>
using namespace std;
void rvereseArray(int arr[], int start, int end)
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
}
int main()
{
	int t,pill;
	cin>>t;
	while(t--)
	{
		int a[101]={0};
		int n,c,akela=0,pil,ele;
		cin>>n;
		int count=0,j=0,harino=0;
		for(int i=0;i<n;i++)
        {
            cin>>ele;
            if(ele>=50)
                count++;
            else if(ele>=25)
            {
                harino++;
                count++;
            }
            else
            {
                a[j]=ele;
                j++;
            }
        }
        printArray(a,n);
		sort(a,a+n);
        n=j;
        int i,sum;
        for(i=harino;i<n;i++,n--)
        {   sum=a[n-1];
            int multiplier=0;
            while(sum<50)
            {
                sum=sum*multiplier;
                multiplier++;
                i++;
            }
        }
    cout<<count<<endl;
}	}


