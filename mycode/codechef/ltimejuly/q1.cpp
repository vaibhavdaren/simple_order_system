#include<iostream>
#include<string>
using namespace std;
int main()
{
string s;
cin>>s;
int c=0,i,j;
int n=s.length();

//cout<<s<<n;
i=n-1;
while(i>=0)
{
//cout<<s[i]<<"here"<<endl;
if(s[i]=='0')
{
   // cout<<"hereinfirstif";
i--;
}
else
{
    c++;
for(j=0;j<i;j++)
{

if(s[j]=='0')
{
s[j]='1';
}
else
{
s[j]='0';
}
}
i--;
}
}
cout<<c<<endl;
}
