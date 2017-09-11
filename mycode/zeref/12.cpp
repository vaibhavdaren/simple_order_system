#include<map>
#include<iostream>
using namespace std;
int main()
{
int t,i,n,k;
cin>>t;
map <int,int> mymap;
while(t--)
{
    cin>>n>>k;
    char s[n+1];
    cin>>s;
    int mi[n];
    int c=0,p=0,j;
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='a')
        {

           mymap[++c]=0;
           p=c;
           flag=1;

        }
        else if(s[i]=='b'&&flag==1)
        {
           mymap[c]++;
        }

    }
 for (std::map<int,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';
}
}
