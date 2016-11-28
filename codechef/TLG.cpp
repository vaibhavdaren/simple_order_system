#include<algorithm>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    int sa=0,sb=0;
    cin>>t;
    int a[t],b[t];
    int s[t];
    int i;
    int l1=0,l2=0;
    int la[t];
    int lb[t];
    int j=0,k=0;
    for(i=0;i<t;i++)
        {
            cin>>a[i]>>b[i];
            if(a[i]>b[i])
                {l1++;
                la[j]=abs(a[i]-b[i]);
                j++;
                }
            else
                {
                l2++;
                lb[k]=abs(a[i]-b[i]);
                k++;
                }
            sa+=a[i];
            sb+=b[i];

        }

            if(sa>sb)
                {
                    cout<<"1 ";
                    sort(la,la+j);
                    cout<<la[j-1];

                }
            else
                {
                cout<<"2 ";
                sort(lb,lb+k);
                cout<<lb[k-1];
                }
            cout<<endl;
	return 0;
}
