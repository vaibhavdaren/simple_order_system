#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{	int karma=1;
	int t;
	cin>>t;
	struct web
	{
        char name[110];
		int rank;
	};
	web s[10];
	while(t--)
	{
	cout<<"Case #"<<karma<<":"<<endl;
	karma++;
	int max;
	max=-1;
	web s[10];
	for(int i=0;i<10;i++)
	{
	scanf("%s %d",s[i].name,&s[i].rank);
	if(s[i].rank>max)
	{
	max=s[i].rank;
	}
	}
	for(int i=0;i<10;i++)
	{
		if(s[i].rank==max)
			{
			cout<<s[i].name<<endl;
			}
	}

	}
	return 0;
}
