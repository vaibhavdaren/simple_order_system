#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n = 1000000;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        do
        {
            if(a==b)
            {
                cout<<a<<endl;
                break;
            }
        else{
            a++;
            if(prime[a]==true)
               {
                   b++;
               }
            else
            {
                b--;
            }
            if(a==b)
            {
                cout<<a<<endl;
                break;
            }
        }
            //cout<<a<<" "<<b<<endl;
        }while(a<b);
        //cout<<"value: "<<counter<<endl;
    }

    return 0;
}
