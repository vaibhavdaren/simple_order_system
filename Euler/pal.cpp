#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        int t;
        int i;
                int ctr1=0,ctr2=0;
                int n;
                cin>>n;
                int ele;
                int a[n];
                for(i=0;i<n-1;i++)
                        {
                        cin>>ele;
                        if(ele%2==0)
                                ctr1++;
                        else
                                ctr2++;
                        a[i]=ele;
                }
        int k1=ctr1;
        int k2=ctr2;
                int s=0;
                for(i=0;i<n-1;i++)
                        {
                 if(a[i]%2==0)
                        {
                         ctr1--;
                         s=s+ctr1;

                 }
                        else
                                {
                         ctr2--;
                         s=s+ctr2;

                 }

                }

        ctr1=k1;
        ctr2=k2;
        int s1=0;
           for(i=0;i<n;i++)
                        {
                 if(a[i]%2==0)
                        {
                         ctr1--;
                         s1=s1+ctr2;

                 }
                        else
                                {
                         ctr2--;
                         s1=s1+ctr1;

                 }

                }
                cout<<abs(s-s1)<<endl;


        return 0;
}
