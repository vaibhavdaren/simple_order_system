#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int main()
{
    int T, N, i,num,val=-1;
    scanf("%d", &T);

    for (int t = 1; t <= T; ++t)
    {
        scanf("%d", &N);
        int arr[N];
        for(i=0;i<N;i++)
            cin>>arr[i];
        val=*std::max_element(arr,arr+N);
        printf("Case %d: %d\n", t ,val);

    }
}
