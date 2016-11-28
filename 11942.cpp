#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    cout<<"Lumberjacks:"<<endl;
    int n;
    cin>>n;
    int a[10];
    while(n--){
    int i,j,k;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }

  int  flag1=0;
    int flag2=0;
    for(i=0;i<9;i++)
    {
        if(a[i]<a[i+1])
        {
        flag1++;
        }
        if(a[i]>a[i+1])
        {
        flag2++;
        }
    }
    if(flag1==9||flag2==9)
    {
        cout<<"Ordered"<<endl;
    }
    else
    {
        cout<<"Unordered"<<endl;
    }
    }



    return 0;
}

