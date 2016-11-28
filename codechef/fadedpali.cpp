#include <iostream>
#include<string.h>
#include <algorithm>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--)
    {
    char s[15000];
    cin>>s;
  int l=strlen(s);
    int n;
     n=l;
     int f=0;
    for(i=0;i<n/2;i++)
    {
        if(s[i]==s[l-i]||s[i]=='.'||s[l-i-1]=='.')
        {
            f=1;
            if(s[i]=='.'&&s[l-i-1]=='.')
            {
                s[i]=='a';s[l-i-1]=='a';
            }
            else
            {
            if(s[i]=='.')
            {
                s[i]=s[l-i]-1;
            }
            else if(s[l-i-1]=='.')
            {
                s[l-i-1]=s[i];
            }
            }
        }
        else
            f=10;
    }
    if(f==1)
        cout<<s<<endl;
    else
        cout<<"-1\n";
    }
    return 0;
}
