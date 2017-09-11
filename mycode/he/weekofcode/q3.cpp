#i#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p=n;
        while(n%2!=1)
        {
            if(n%2==0)
                n=n/2;
        }
        if(n==1)
          ans=2;
        n=p;
        for(i=3;i<sqrt(n),i=i+2)
        {
            if(n%i==0)
              ans=i;
        }
          cout<<ans;
    }
    return 0;
}
