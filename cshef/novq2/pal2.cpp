#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

int main() {
 int i,n;
 cin>>n;
 string s[n+1];
 for(i=1;i<=n;i++)
 {
     cin>>s[i];
 }
 int o[n+1];

 for(i=1;i<=n;i++)
 {
     cin>>o[i];
 }
 std::map<int,string> mymap;
for(i=1;i<=n;i++)
 {
  mymap[o[i]] = s[i];
 }

  // show content:
  for (std::map<int,string>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    cout<< it->second;
  return 0;
}
