#include <stdio.h>
float avg(int *p, int k)
{  float z;
    int i,c=0;
    for(i=0;i<k;i++)
    {
        c=c+*(p+i);

    }
    z=((float)c)/k;
    return z;
}

int main(void)
{
	int T;
	int N,i,j,k=0;
	int l=1;
	int m=0;
	int *A;
	float b;
	scanf("%d",&T);
	for(j=0;j<T;j++)
	{
	      scanf("%d",&N);
	      A=(int *)malloc(sizeof(int)*N);
	      for(i=0;i<N;i++)
	      {
	          scanf("%d",&A[i]);

	      }
if(avg(A,N)>4.0)
    m=1;

	      for(i=0;i<N;i++)
	      {

	           if(A[i]<=2)
                l=0;
                if(A[i]==5)
                    k=1;


	      }
	      if(l==1&&k==1&&m==1)
	      printf("yes\n");
	      else
                    printf("No\n");

	}
	return 0;
}
