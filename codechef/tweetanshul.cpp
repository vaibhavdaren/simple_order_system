#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {
int n,k,x,i,j,l,v=0;
char click[100],b[100];
strcpy(b,"CLOSEALL\0");
	scanf("%d %d",&n,&k);
	 int a[n];
	 for(i=0;i<n;i++)
        a[i]=0;
	for(x=0;x<k;x++)
	{
	    scanf(" %[^\n]",click);
	    j=strcmp(click,b);
	    if(j==0)
        {
          for(i=0;i<n;i++)
           a[i]=0;
        }
        else
        {
            strrev(click);
            l=atoi(click);

            if(a[l-1]==0)
            {
                a[l-1]=1;}
            else{
               a[l-1]=0;}
        }
        for(i=0;i<n;i++)
        {
           if(a[i]==1){
                v++;}
        }
	    printf("%d\n",v);
	    v=0;
	}
	return 0;
}
