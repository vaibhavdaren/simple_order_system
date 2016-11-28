#include<stdio.h>
int main()
{


int m;
scanf("%d",&m);
    int i,j,k;
    i=0;
    j=0;
    k=0;
    for(i=0;i<m;i++)
        {
            for(j=0;j<m-i-1;j++)
                {
                    printf(" ");
                }
            for(;j<m;j++)
            {
                printf("#");
            }
             printf("\n");
        }

}
