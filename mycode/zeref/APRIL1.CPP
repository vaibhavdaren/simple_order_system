#include<iostream>
using namespace std;
int main()
{
int t,co;
cin>>t;

string a,b,c,d;
string p,q,r,s;
while(t--)
{
    co=0;
cin>>a>>b>>c>>d;
cin>>p>>q>>r>>s;
if(a==p||a==q||a==r||a==s)
{
    co++;
}
if(b==p||b==q||b==r||b==s)
{
    co++;
}
if(c==p||c==q||c==r||c==s)
{
    co++;
}
if(d==p||d==q||d==r||d==s)
{
    co++;
}
if(co>=2)
    cout<<"similar"<<endl;
else
    cout<<"dissimilar"<<endl;
}
}
