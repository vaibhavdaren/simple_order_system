#include <iostream>
using namespace std;


// Driver program to test above function
int main()
{
	long long int n,k;
	cin>>n>>k;

   // Create and initialize an array to store
    // phi or totient values
    long long int phi[n+1];
    for (long long int i=1; i<=n; i++)
        phi[i] = i; // indicates not evaluated yet
                    // and initializes for product
                    // formula.

    // Compute other Phi values
    for (long long int p=2; p<=n; p++)
    {
        // If phi[p] is not computed already,
        // then number p is prime
        if (phi[p] == p)
        {
            // Phi of a prime number p is
            // always equal to p-1.
            phi[p] = p-1;

            // Update phi values of all
            // multiples of p
            for (long long int i = 2*p; i<=n; i += p)
            {
               // Add contribution of p to its
               // multiple i by multiplying with
               // (1 - 1/p)
               phi[i] = (phi[i]/p) * (p-1);
            }
        }
    }
 for(long long int j=0;j<k;j++)
 	{
 		n=phi[n];
 	}
 	cout<<n;

}
