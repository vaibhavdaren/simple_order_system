#include<iostream>
using namespace std;
int main()
{
int s,t,l,f,fsize,animals,factor;
cin>>t;
while(t--)
{
    cin>>f;
    s=0;
    while(f--)
    {
        cin>>fsize>>animals>>factor;
        l=fsize*factor;
        s=s+l;
    }
    cout<<s<<endl;
}
return 0;
}
