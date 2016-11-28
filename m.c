#include<stdio.h>
#include<string.h>
void main()
{
    printf("enter string less than or equal to 100 characters (N-S-E-W)");
    char a[100];
    scanf("%s",a);
    int x,i,n=0,w=0,e=0,s=0;
    x=strlen(a);
    for(i=0;i<x;i++)
    {

        if((a[i]=='n')||(a[i]=='N'))
        {
            n++;
        }
        else if((a[i]=='s')||(a[i]=='S'))
        {
            s++;
        }
        else if((a[i]=='e')||(a[i]=='E'))
        {
            e++;
        }
        else if((a[i]=='w')||(a[i]=='W'))
        {
            w++;
        }

        else
        {
            printf("wrong string");
            break;
        }

    }
    char b[100];
if(n>s)
{
    for(i=0;i<(n-s);i++)
    {
        printf("%c",'n');
    }
}
if(s>n)
{
    for(i=0;i<(s-n);i++)
    {
        printf("%c",'s');
    }
}

if(e>w)
{
    for(i=0;i<(e-w);i++)
    {
        printf("%c",'e');
    }
}
if(w>e)
{
    for(i=0;i<(w-e);i++)
    {
        printf("%c",'w');
    }
}
if(e==w&&n==s)
{
    {
        printf("%s","Orign");
    }n
}
return 0;
}
