#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
stack <char> s;

int isexp(char x)
{
    if(x=='+'||x=='*'||x=='-'||x=='/'||x=='^')
    return 1;
    else return 0;
}
void ispara(char x,int c)
{
    char t;
    if(x=='(')
    {c++;
    return;
    }
    if(x==')')
    {

t=s.top();//cout<<t;
        s.pop();

        //cout<<t;
        c--;
        return;
    }
    else if(isexp(x))
    {

        s.push(x);
        return;
    }
    else cout<<x;
return;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int i=0,c=0;

        string st;
        cin>>st;


        while(st[i]!='\0')
        {
            ispara(st[i],c);
            i++;
        }
    }
    //cout<< sizeof(s);
    return 0;
}
