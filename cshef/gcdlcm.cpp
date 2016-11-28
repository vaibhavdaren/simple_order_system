#include<iostream>
using namespace std;

int gcd(int A, int B) {
    if(B==0)
        return A;
    else
        return gcd(B, A % B);
}
int main()
{
int t,a,b;
cin>>t;
while(t--)
{
cin>>a>>b;
int g=gcd(a,b);
cout<<g<<" "<<a*b/g<<endl;
}
return 0;
}
