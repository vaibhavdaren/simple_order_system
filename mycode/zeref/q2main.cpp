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
    cin>>n>>key;
    char s[n+1];
    cin>>s;
    int mi[n];
    int c=0,p=0,j;
    int flag=0;
    struct node
    {
        int posa;
        int nob;
    };
    node v[n];
    int k=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='a')
        {
            c++;
            node[k].posa=c;
            node[k].nob=0;
         for(j=i+1;j<n;j++)
        {
          if(s[i]=='b')
            node[k].nob++;

        }
        }
        k++;
    }
}
int arr[k];
for(d=0;d<n;d++)
{
    arr[d]=v[d].nob;
}

}

