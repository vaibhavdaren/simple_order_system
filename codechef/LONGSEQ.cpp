#include <iostream>
#include <algorithm>
#include<string.h>

using namespace std;

int main(){
    int i,t;
    cin>>t;
    while(t--)
    {
    int l=0;
    int flag=0;
    string s;
    long int l1=0;
    long int l2=0;
    cin>>s;
    for(i=0;i<s.length();i++){
        if(s[i]=='0')
        {
            l1++;
        }
        else if(s[i]=='1')
            l2++;
        else{
            flag++;
            break;
    }
    }
    if((l2==1 || l1==1)&&flag==0)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    }


    return 0;
}
