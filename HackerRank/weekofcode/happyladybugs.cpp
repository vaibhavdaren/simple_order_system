#include <map>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;


int main(){
    int t,i;
    cin>>t;

    while(t--)
    {
           int n;
           cin>>n;
           char s[n];
                cin>>s;
           map<char,int> mymap;
            int k=0;
           map< char , int> :: iterator it;
           for(int i  =  0 ; i < n ; i++)
	{
                   if(s[i]!='_')
		mymap[s[i]] ++;
                   else
                           k++;
	}

       if(mymap.size()>0&&k>=1){
               int flag=0;
          for(it = mymap.begin() ; it!= mymap.end() ; it++)
	{
                        if(it -> second>=2)
                            {   flag=1;

                            }
                       else{
                                  flag=0;
                                  break;
                           }

	}
            if(flag==1&&k>=1)
                    cout<<"YES"<<endl;

            else
                    cout<<"NO"<<endl;
       }
            else if(mymap.size()==0&&k>=0){

                        cout<<"YES"<<endl;

            }
            else if(mymap.size()>0&&k==0)
                    {
                    int l,m;
                    int isflag=0;
                 for(l=1;l<n-1;l++)
                         {
                         if(s[i]==s[i-1]||s[i]==s[i+1])
                                 isflag=1;
                         else
                                 isflag=0;
                                 break;

                 }
                    if(isflag==1)
                                                    cout<<"YES"<<endl;
                        else
                    cout<<"NO"<<endl;

            }


            mymap.clear();

    }


    return 0;
}
