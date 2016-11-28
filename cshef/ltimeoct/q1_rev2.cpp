#include<bits/stdc++.h>
#define ulli unsigned long long int
#define lli long long int
using namespace std;


int main()
{
  std::ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        int t;
        cin>>t;
        while(t--)
        {
            ulli j,m[4],o[4],p[4],m1,o1,p1,g,y,r,a[7],i;
             cin>>m[1]>>m[2]>>m[3]>>o[1]>>o[2]>>o[3]>>p[1]>>p[2]>>p[3];
             a[0]=m1=m[1]+m[2]+m[3];
             a[1]=o1=o[1]+o[2]+o[3];
             a[2]=p1=p[1]+p[2]+p[3];
             a[3]=g=m[1]+o[1]+p[1];
             a[4]=y=m[2]+o[2]+p[2];
             a[5]=r=m[3]+o[3]+p[3];
             sort(a,a+6);
                 if(a[5]==0){
                    cout<<"0"<<"\n";
                    }
             else if(a[5]%2==0){
                    cout<<a[5]-1<<"\n";
                    }
                 else{
                    cout<<a[5]<<"\n";
                    }
        }

