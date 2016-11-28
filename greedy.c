#include<math.h>
//#include<cs50.h>
#include<stdio.h>
int main()
{
    double no =3.44;
int count =0;
while(no!=((int)no))
{
    count++;
    no=no*10;
}
printf("%d",count);



    printf("O hai! ");
    float m;
    do{
    printf("How much change is owed?\n");
    scanf("%f",&m);
    }while(m<0.0);
m=m*100;
int n=0;
while(m>0||m!=0)
{
    if(m>=25)
        {
            n++;
            m=m-25;
        }
    else if(m>=10)
        {
            m=m-10;
            n++;
        }
    else if(m>=5)
        {
            m=m-5;
            n++;
        }
    else
        {
            m=m-1;
            n++;
        }
}
printf("%d\n",n);
return 0;
}
