#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int i,ch,l,n,p,m,j;
	   cin>>m>>n; //m students
	   //n institutes;
	   int scount[n+1];
	   int allo[m+1]={0};
	   for(i=1;i<=n;i++)
	    cin>>scount[i];
	   int flag;
	   for(i=1;i<=m;i++)
	   {
	       int nf=0;
	       flag=0;
	    for(j=1;j<=n;j++){
	    cin>>ch;
	    if(scount[ch]>0&&flag==0)
	        {
	            scount[ch]--;
	            allo[i]=ch;
	            flag=1;
	            nf=1;
	        }
	        if(nf==0)
	        {
	            allo[i]=0;
	        }

	   }

	   }
	   for(i=1;i<=m;i++)
	   {
	       cout<<allo[i]<<" ";
	   }
	   cout<<endl;
	}
	return 0;
}
