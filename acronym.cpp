#include <iostream>
using namespace std;

int main()
{
	int karma=0;
    int t;
    cin>>t;
    string s[t];
    int n=t;
    for(t=0;t<n;t++)
    	{
    		cin>>s[t];
    	}
  	int l;
  	cin>>l;
  	int i;
  	string sen[l];
  	for(i=0;i<l;i++)
  		{
  			cin>>sen[i];
  			int f=0;
  			for(int j=0;j<t;j++)
  				{
  					if(sen[i]==s[j])
  						{
  							f=1;
  						}
  				}
  		if(karma==0){
  			if(f==0)
  				{
  						if(islower(sen[i][0]))
  						{	cout<<(char)toupper(sen[i][0]);}
  				 else
  				 		{cout<<(sen[i][0]);}
  				}karma=1;
  		}
  		else
  			{
  					if(islower(sen[i][0]))
  						{	cout<<"."<<(char)toupper(sen[i][0]);}
  				 else
  				 		{cout<<"."<<(sen[i][0]);}
  				}
  		}






  		cout<<endl;
    return 0;
}
