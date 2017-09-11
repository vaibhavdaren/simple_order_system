#include<iostream>
using namespace std;
int main()
{
int t,co;
cin>>t;
while(t--){
 int n,i,k,size;
 cin>>n>>k;
 int visited[k+1]={0};
 int ctr=0,flag=0;
 while(n--)
 {
     int local_visited[k+1]={0};
     int l_ctr=0;
     cin>>size;
     int a[size];
     for(i=0;i<size;i++)
     {
        cin>>a[i];
        if(local_visited[a[i]]==0)
         {
         l_ctr++;
         local_visited[a[i]]=1;
         }
        if(visited[a[i]]==0)
         {
          visited[a[i]]=1;
          ctr++;
         }
         else
            continue;
     }
     //cout<<"value : "<<ctr;
     if(l_ctr==k)
      flag=10;
     else if(ctr==k)
      flag=1;
     else if(ctr<k)
      flag=-1;
 }
 if(flag==10)
  {
   cout<<"some"<<endl;
  }
  else if(flag==-1)
  {
   cout<<"sad"<<endl;
  }
  else if(flag==1)
   {
   cout<<"all"<<endl;
  }
}
}
