#include<iostream>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map <int,int> winner;
        map <int,int> :: iterator it;
        bool tie=0;
        for(int i=0;i<n;i++)
        {
            int noc;
            cin>>noc;
            int types[noc];
            for(int j=0;j<noc;j++)
                cin>>types[j];
            int ans=noc;
            int present[7]={0};
            int add=0;
            for(int j=0;j<noc;j++)
            {
                if(present[types[j]]==0)
                    add++;
                present[types[j]]=1;
            }
            if(add==6)
                ans+=4;
            else if(add==5)
                ans+=2;
            else if(add==4)
                ans++;
            if(winner.find(ans)!=winner.end())
                tie=1;
            winner[ans]=i;
        }
        int win_index=0;
        int fans=0;
        bool chef_win=0;
        for(it=winner.begin();it!=winner.end();it++)
        {
            if(it->first>fans)
            {
                fans=it->first;
                win_index=it->second;
            }
        }
        if(tie==1)
            cout<<"tie"<<endl;
        else if(win_index==0)
            cout<<"chef"<<endl;
        else
            cout<<win_index+1<<endl;
    }
}
