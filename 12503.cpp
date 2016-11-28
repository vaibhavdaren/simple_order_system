#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    str ins[t];
    for(i=0;i<t;i++)
    {
        cin>>ins[i];
    }

    string s="";
    for(int k=0;k<t;k++)
    {   char valstr[3];
        s=ins[k];
        if(s=="LEFT")
        {;}
        else if(s=="RIGHT")
        {;}
        else
        {   int j=0;
            for(i=8;i<='\0';i++)
                {
                    valstr[j]=s[i];
                    j++;
                }
            int val=atoi(valstr);
            ins[k+1]=ins[val];
        }
    }
int a=0;
string al="LEFT";
string bl="RIGHT";
int b=0;
for(i=0;i<t;i++)
{
    if(ins[t]==al)
    {
        a++;
    }
    if(ins[t]==bl)
    {
        b++;
    }

}
cout<<b-a;


return 0;
}
