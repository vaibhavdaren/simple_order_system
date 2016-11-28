#include <iostream>
#include <algorithm>
#include <unordered_map>
#include<bits/stdc++.h>
using namespace std;


int main(){
   long long int n;
   cin >> n;
    long i,c=0;
    for(i=0;i<=n;i++)
         {
            if((i^n)==(i+n))
                    c++;
    }
        cout<<c;
    return 0;
}
