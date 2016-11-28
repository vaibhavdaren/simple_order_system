#include <bits/stdc++.h>
#define ll long long long int

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
   string s; int i,j,k,n,ctr=0;
   cin>>s;
   map<char,int>m;
   n=s.length();
 for(i=0;i<n;i++){
    m[s[i]]++;
 }
char a;


/*
for(a='a';a<='z';a++)
{ if(m[a]!=0&&n-m[a]==m[a]){
    ctr++;
    printf("YES\n");
    break;}

}
if(ctr==0){
    printf("NO\n");
}


    }
*/
    return 0;
}
