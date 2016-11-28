#include <stdio.h>
#include<string.h>


int main()
{
	char str[30],rev[30];
	int n;
	int t;
	while(t--){
		scanf("%s",&str);
		n=strlen(str);
		while(n>=0)
		{
		putchar(str[n]);
		n--;
	}
	printf("\n");
	}
    return 0;
}
