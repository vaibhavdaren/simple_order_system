#include<iostream>
#include<stdio.h>
typedef long long ll;
int main()
{
    int t, n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n], i, j;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        ll b[n], c=0; b[0]=1;
        for(i=1;i<n;i++)
        {
            if(a[i-1]<=a[i])
            b[i] = b[i-1] + 1;
            else
            b[i] = 1;
        }
        for(i=0;i<n;i++)
        c+=b[i];
        printf("%lld\n",c);
    }
    return 0;
}
