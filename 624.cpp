#include<iostream>
#include<string>
using namespace std;
int main()
{
int t,l;
string s;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>s;
    l=s.length();
    if(l==1&&(s[0]=='4'||s[0]=='1'))
        cout<<"+"<<endl;
    else if(l==2&&s[0]=='7'&&s[1]=='8')
        cout<<"+"<<endl;
    else if(s[l-1]=='5'&&s[l-2]=='3')//35
        cout<<"-"<<endl;
    else if(s[l-1]=='4'&&s[0]=='9')//9s4
        cout<<"*"<<endl;
    else if(s[0]=='1'&&s[1]=='9'&&s[2]=='0')
        cout<<"?"<<endl;
}

return 0;
}
