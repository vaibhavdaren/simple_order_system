#include<bits/stdc++.h>
using namespace std;
int carryover =1;

inline void addition(char l[])
{
    long long int itervar,count=0,len;
   len=strlen(l);
        for(itervar=len-1;itervar>=0;itervar--)
         {
             if(carryover=='0')break;
             if(l[itervar]=='0'&&carryover==1)
                {
                l[itervar]='1';
                carryover=0;
                break;
             }
             if(l[itervar]=='1'&&carryover==1)
                {
                    l[itervar]='0';
                    carryover=1;
                }
         }
}
inline long long int counter1(char l[])
{
    long long int c=0,itervar;
   long long int len=strlen(l);
    for(itervar=0;itervar<len;itervar++)
    {
      if(l[itervar]=='1')
        c++;
    }
    return c;
}
 int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {carryover=1;
        char l3[1001],l2[1001],l1[1001],l[1001];
        long long int n,i,len,c3=0,c2=0,c1=0,c=0;
      cin>>l1>>l2>>l3>>n;
        c=counter1(l2);
        addition(l3);
        c3=counter1(l3);
        if(carryover==1)
            {
                addition(l2);
                c2=counter1(l2);
                if(carryover==1)
                {
                    c2=n*c2;
                    addition(l1);
                    c1=counter1(l1);
                    if(carryover==1)
                        c1=1;
                }
                else
                {
                    c2=(n-1)*c+c2;
                    c1=counter1(l1);
                }

            }
            else
            {
                c2=counter1(l2);
                c2=n*c2;
                c1=counter1(l1);
            }
            long long int pans=c3+c2+c1;
        cout<<pans<<"\n";

    }

}
