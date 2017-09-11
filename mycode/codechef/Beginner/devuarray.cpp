include <bits stdc++.h>
using namespace std; int main() { int n,q; cin>>n>>q; int a[n+1],i; for(i=0;i<n;i++) cin="">>a[i]; sort(a,a+n); while(q--) { int t; cin>>t; if(t>=a[0] && t<=a[n-1]) cout<<"Yes"<<endl; else cout<<"No"<<endl; } return 0; }
