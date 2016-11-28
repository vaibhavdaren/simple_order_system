#include<stdio.h>

//#include "cs50.h"
int main()
{
  int n ,i,j,k,l,m;
  scanf("%d",&n);
  if(n%2!=0)
  {for(i=0;i<n;i++)
    {
       printf("*");
       }
       printf("\n");

       for(i=0;i<(n-1)/2;i++)
       {
            for(j=1;j>0;j--)
            {
                printf("*");
            }
            for(k=0;k<i;k++)
            {
                printf(" ");
            }
             for(j=1;j>0;j--)
            {
                printf("*");
            }
            for(l=0;l<(n-4-i-i);l++)
            {
                printf(" ");
            }
            if(i<((n-1)/2)-1)
            {

                printf("*");
            }
            for(l=0;l<i;l++)
                printf(" ");
            for(j=1;j>0;j--)
                printf("*");
            printf("\n");

            }
  for(i=0;i<((n-1)/2)-1;i++)
  {
       for(j=1;j>0;j--)
            {
                printf("*");
            }
            for(k=(n-1)/2;k>i+2;k--)
            {
                printf(" ");
            }
            if(i<(n-1)/2)
                printf("*");
            for(m=0;m<i+i+1;m++)
                printf(" ");
           if(i<(n-1)/2)
                printf("*");
                for(k=(n-1)/2;k>i+2;k--)
            {
                printf(" ");
            }
             for(j=1;j>0;j--)
                printf("*");
            printf("\n");
  }
 for(i=0;i<n;i++)
    {
       printf("*");
       }}
    return 0;
       }
