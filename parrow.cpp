#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
        int i,n,s[2000001];

    long long   int q[2000001];
        n=2000001;
       for(i=0;i<n;i++)
          q[i]=i*i;

    for(i=0;i<n;i++)
        cout<<q[i];

    //for(i=1;i<n;i++)
    //q[i]=q[i-1]+q[i];
        return 0;
}
