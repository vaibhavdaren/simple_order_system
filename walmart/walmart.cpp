#include<iostream>
#include<string.h>
using namespace std;
void countways(bool mat[][100],int i,int n,int *count,bool visited[]);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool mat[100][100];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        }
        int count=0;
        bool visited[n];
        memset(visited,0,sizeof(visited));
        int i=0;
        countways(mat,i,n,&count,visited);
        cout<<count<<endl;
    }
    return 0;
}

void countways(bool mat[][100],int i,int n,int *count,bool visited[])
{
    if(i>=n)
        return;
    int l;
    for(int j=0;j<n;j++)
    {
        bool f=false;
        if(mat[i][j]==1&&visited[j]==0)
        {
            f=true;
            l=j;
            visited[j]=1;
            countways(mat,i+1,n,count,visited);
        }
        bool flag=1;
        for(int k=0;k<n;k++)
        {
            if(visited[k]==0)
                flag=0;
        }
        if(flag==1)
            (*count)=(*count)+1;
        if(f==true)
            visited[l]=0;
    }
}
