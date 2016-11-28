#include <iostream>
using namespace std;
int min(int x,int y)
{
	if(x=<y)
		{
			return x;
		}
	else
		{
			return y;
		}
}

int main()
{
	int tc,n,m,i;
	cin>>tc;
	int x,y;

	while(tc--)
	{
		int c;
		c=0;
		cin>>n>>m;
		int xa[m],ya[m];
		int arr[m];
		for(i=0;i<m;i++)
			{
				cin>>xa[i]>>ya[i];
			}
			for(i=0;i<m;i++)
			{
				x=xa[i];y=ya[i];
				if(x<=y)
					{
						arr[i]=x;
					}
				else
					{
						arr[i]
					}
			}
			if(c==m)
				{
					cout<<"Yes"<<endl;

				}
			else
				{
					cout<<"No"<<endl;

				}



	}
    return 0;
}
