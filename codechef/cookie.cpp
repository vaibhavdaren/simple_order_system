#include <iostream>
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
int countDistinct(int arr[], int k, int n)
{
    // Creates an empty hashmap hm
    map<int, int> hm;

    int dist_count = 0;
    for (int i = 0; i < k; i++)
    {
       if (hm[arr[i]] == 0)
       {
           dist_count++;
       }
    hm[arr[i]] += 1;
    }

  cout << dist_count << endl;

   for (int i = k; i < n; i++)
   {
     if (hm[arr[i-k]] == 1)
    {
        dist_count--;
    }
   hm[arr[i-k]] -= 1;

  if (hm[arr[i]] == 0)
  {
     dist_count++;
  }
  hm[arr[i]] += 1;

  return dist_count ;
  }
}


int main(){
   int t;
   cin>>t;
   while(t--)
   {
       int i,j,n;
       cin>>n;
       int c[n];
       int ans[n];
       for(i=0;i<n;i++)
       {
        cin>>c[i];
        int maxe=c[i];
        cout<<maxe;
        int a[maxe];

        for(j=0;j<maxe;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<maxe;j++)
        {
            cout<<a[j];
        }

        int l=countDistinct(a,maxe,maxe);
        ans[i]=l;
        cout<<l;
        }
   }
    return 0;
}
