#include<iostream>

int encodeInteger(int n, int x){
{

	n = n<<(1<<(1<<(1<<1)));
	x = x | n;
	return x;
}

using namespace std;
int main()
{
    int t;
    cin>>t;
    cout<<encodeInteger(t,1);


}
