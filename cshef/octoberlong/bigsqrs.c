#include <stdio.h>

long int sumo1(long int n)
{
    int l=0;
while(n>0)
    {
       if(n%2==0)
       {
           l++;
           n=n/2;
       }
       else
            break;
    }
    return l;
}

long int sumo2(long int n)
{
    int l=0;
while(n>0)
    {
       if(n%5==0)
       {
           l++;
           n=n/5;
       }
       else
            break;
    }
    return l;
}
void one(long int [],int ,int ,int ,int );
void two(long int [],int ,int ,int ,int );
int three(long int [],int ,int ,int );
main()
{
     long int T,N,M,i,j,sum,l;
     long int b[4],k;
     scanf("%d",&T);
     long int z[T];
     for(i=1;i<=T;i++)
        {
             sum = 0;
             scanf("%d",&N);
             scanf("%d",&M);
             long int A[N+1];//
             for(j=1;j<=N;j++)
                {
                     scanf("%d",&A[j]);
                }
             for(j=1;j<=M;j++)
                {
                     scanf("%d",&b[0]);
                     if(b[0] == 3)
                       {
                            for(k=1;k<=2;k++)
                               {
                                    scanf("%d",&b[k]);
                               }
                            l = three(A,b[1],b[2],N);
                            sum = sum + l;
                       }
                     else
                       {
                            for(k=1;k<=3;k++)
                               {
                                    scanf("%d",&b[k]);
                               }
                            if(b[0] == 1)
                              {
                                   one(A,b[1],b[2],b[3],N);
                              }
                            else if(b[0] == 2)
                              {
                                   two(A,b[1],b[2],b[3],N);
                              }
                      }

             }
           z[i] = sum;
      }
   for(i=1;i<=T;i++)
      {
           printf("%d\n",z[i]);
      }
}
void one(long int A[],int L,int R,int X,int N)
{
     long int i;
     for(i=L;i<=R;i++)
        {
             A[i] = A[i] * X;
        }
}
void two(long int A[],int L,int R,int Y,int N)
{
     long int i;
     for(i=L;i<=R;i++)
        {
             A[i] = ((i - L + 1) * Y);
        }
}
int three(long int A[],int L,int R,int N)
{

     long int i,x,y,p,c;
     c = 0;
     x = 0;

     for(i=L;i<=R;i++)
        {
            x+=sumo1(A[i]);
            c+=sumo2(A[i]);
        }
        if(x>c)
           return c;
        else
     return(x);
}
