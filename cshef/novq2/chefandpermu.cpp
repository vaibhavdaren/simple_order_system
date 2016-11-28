#include<iostream>
#include<math.h>
long long int  exponentiation(long long int  a, long long int b, long long int  c) {
        long long int ans = 1;
        for(int i = 1;i <= b;i++) {
            ans *= a;                             //multiplying a, b times.
            ans %= c;
        }
    return ans;
 }
 long long int modRecursion(long long int a,long long  int b, long long int c)
{
    if(b == 0)
    return 1;
    if(b == 1)
    return a%c;
    else if( b%2 == 0)                                           //if b is even
    {
        return modRecursion((a *a)%c,b/2,c);
    }
    else                                                                    // if b is odd.
    {
        return (a*modRecursion((a*a%c),b/2,c))%c;
    }
}
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
ll s,n,t;
cin>>t;
while(t--)
{
cin>>n;
s=(modRecursion(2,n-1,mod)-2%mod)%mod;
if(n<2)
cout<<"0"<<endl;
else
cout<<s<<endl;
}
}
