#include <iostream>
#include <algorithm>

using namespace std;
long long int maxi(long long int a,long long int b)
{
    if(a>b)
        return a;
    else
        return b;

}
int main(){

   long long int t,i,j,k,l,maxo,a,b,c,d,e,f,g,h,ans;
    cin>>t;
    while(t--)
    {   ans=0;
         cin>>a>>b>>c;
         cin>>d>>e>>f;
         cin>>g>>h>>i;
        long long int r1=a+b+c;
        long long int r2=d+e+f;
        long long int r3=g+h+i;
        long long int c1=a+d+g;
        long long int c2=b+e+h;
        long long int c3=c+f+i;
ans=maxi(r1,ans);
ans=maxi(r2,ans);
ans=maxi(r3,ans);
ans=maxi(c1,ans);
ans=maxi(c2,ans);
ans=maxi(c3,ans);
    if(ans%2==0&&ans!=0)
    {
        ans=ans-1;
    }
    cout<<ans<<endl;
    }

    return 0;
}
