#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int p,d,m,s,ans=0,ans1=0;
    cin>>p>>d>>m>>s;

    while(p>=m &&(s-d)>0)
    {
        //cout<<p<<" ";
        p=p-d;
        s=s-d;
        ans++;
    }
    //cout<<p<<s<<ans;
    //cout<<ans;
        p=m;
        if(p>=0&&(s-p)>=0)
        {
         s=s-p;
         ans1++;
        }

    cout<<ans1+ans;
    //cout<<ans+ans1;
    return 0;
}
