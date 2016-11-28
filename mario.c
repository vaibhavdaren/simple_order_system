#include<cs50.h>
#include<stdio.h>
int main()
{

    int m;
    do{
        printf("height: ");
        m=GetInt();
      }while(m<0||m>23);
    if (m==0)
        {
            return 0;
        }
    else{
    int i,j,k;
    for(i=0;i<m;i++)
        {
            for(j=0;j<m-i-1;j++)
                {
                    printf(" ");
                }
            for(k=0;k<i+2;k++)
            {
                printf("#");
            }
             printf("\n");
        }

}
    return 0;
}
