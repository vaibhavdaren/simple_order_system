#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
using namespace std;
int main() {

  int a;
  cin >> a;
  while(a--){
  int n;
  cin>>n;
string s;
  cin>>s;
  int l=s.length();
  int i,j,k;
  for(i=0;i<n;i++)
  {
      for(j=i;j<l;j++)
        {
            k=i*pow(2,i);
            if(k<l)
            std::swap(s[i],s[k]);
        }
  }
// Output the variable to STDOUT
  cout <<s;
  }

  return 0;
}
