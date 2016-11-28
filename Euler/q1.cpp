#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>


using namespace std;
#define ll long long int

int main(){
    int t;
    cin >> t;
        while(t--)
                {
                int n,n1,n2,n3,k1,k2,k3,s1,s2,s3;
         cin>>n;
         n=n-1;
                n1=n;
                n2=n;
                n3=n;
                s1=0;
                s2=0;
                s3=0;
                k1=0;
                k2=0;
                k3=0;
                while(n1%3!=0)
                        n1--;
                k1=n1/3;
                if(k1>0)
                s1=(k1*(3+n1))/2;
                                    cout<<n1<<" "<<k1<<" "<<s1<<endl;

                while(n2%5!=0)
                        n2--;
                k2=n2/5;
                if(k2>0)
                s2=(k2*(5+n2))/2;
                                cout<<n2<<" "<<k2<<" "<<s2<<endl;

                while(n3%15!=0)
                        n3--;
                k3=n3/15;
                if(k3>0)
                s3=(k3*(15+n3))/2;
                cout<<n3<<" "<<k3<<" "<<s3<<endl;

                cout<<s1+s2-s3<<endl;


        }
    return 0;
}
