#include<iostream>
using namespace std;
int main()
{
int t,b,g,i,j;
cin>>t;
while(t--)
{
    cin>>b>>g;
    //n boys 4
    //m girls 3
    int a[b][g];
    for(i=0;i<b;i++)
    {
        for(j=0;j<g;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0;i<b;i++)
    {
        for(j=0;j<g;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}
return 0;
}


