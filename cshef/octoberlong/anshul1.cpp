#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n,c,count=0,i,j;
        scanf("%d %d %d",&n,&m,&c);
        i=1;
        j=m;
        while(i<=n&&j>=1)
        {
            if(i*j==c)
            {
                count++;
                i++;
                j--;
            }
            else if(i*j<c)
                i++;
            else
                j--;
        }
        cout<<count<<endl;
    }
    return 0;
}
