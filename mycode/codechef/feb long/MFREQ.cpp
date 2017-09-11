#include<iostream>
using namespace std;
int main()
{
long int t,i,n,m,l,r,k,p,val;

cin>>n>>m;
long int a[n];
for(i=0;i<n;i++)
    cin>>a[i];


while(m--)
{
    cin>>l>>r>>k;
    p=(r-l+1)/2;
    if(a[p-1]==a[p])
        val=a[p];
    else if(a[p+1]==a[p])
        val=a[p];
    else
        val=-1;
    cout<<val<<endl;

}

return 0;
}
