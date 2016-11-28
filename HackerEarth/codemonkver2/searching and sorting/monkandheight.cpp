// SOURCE http://www.cplusplus.com/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
/***pre processors ***/
using namespace std;
/*
	Maps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order.
*/
int main()
{
    int t,n,i,ele;
    cin>>t;
    while(t--){
	 std::map<int,int> mymap;
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>ele;
    mymap[ele]++;
    }

  // show content:
  int c1=-1;
  int c2=1000000;
  for (std::map<int,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it){
    c1=max(it->second,c1);}

  for (std::map<int,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    c2=min(it->second,c2);

      mymap.clear();

    if((c1-c2)<0)
        cout<<"-1"<<endl;
    else
        cout<<c1-c2<<endl;
  }
  return 0;

}
