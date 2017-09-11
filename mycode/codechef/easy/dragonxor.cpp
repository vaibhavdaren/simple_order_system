#include <algorithm>
#include <iostream>
#include<math.h>
using namespace std;
unsigned int countSetBits(long long int n)
{
    unsigned int count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
}
int main()
{
int t,i;
cin>>t;
long long int n,a,b;
while(t--)
{
cin>>n>>a>>b;
long long int e1=countSetBits(a),e2=countSetBits(b);
long long int j1=n-e1,j2=n-e2;
int ones=min(e1,j2) + min(e2,j1);
int zeros=n-ones;
int c=0;

for(i=zeros;i<n;i++)
        {

            c=c+pow(2,i);

            }

cout<<c<<endl;
}

}
