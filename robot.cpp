#include<stdio.h>
main()
{
 int p=0;
 int i,j,k,l,n,t,m;
 char a[20][t];
 scanf("%d",&t);
  for(i=0;i<t;i++)
   {
        p=0;
      scanf("%d",&n);
      for(j=0;j<n;j++)
      {
          scanf("%s",a[j]);
          l=j;
         if(strcmp(a[j],"left")==0)
         {
             p--;
         }
         if(strcmp(a[j],"right")==0)
         {
             p++;
         }
         m=strstr(a[j],"1");
         printf("%d",m);

      }
      printf("%d",p);
}
}
int foo;
scanf("%*s %d", &foo);
