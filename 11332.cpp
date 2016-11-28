#include<iostream>
using namespace std;
int rajjo(int t)
    {
        if(t<=9)
        {
            return t;
        }
        else
        {
        int l=0;
    while(t==0)
       {
            l=t%10+l;
           t=t/10;
       }
        rajjo(t);
    }
}
int main()
{
int j,k;
long long int s;
cin>>s;
while(1)
{
if(s==0)
{
    break;
}
else
{
        int l;
       while(s==0)
       {
           int l=s%10+l;
           s=s/10;
       }
     j=rajjo(l);
     cout<<j<<endl;
}

}
return 0;
}
