#include<stdio.h>
#include<malloc.h>
#include<iostream>
using namespace std;
struct list
{
  char name[100];
  int age;
  struct list *pname;
  struct list *page;
  };
   struct node *create(struct list *s,struct list **m)
 { int v,i,n;
   printf("enter no of elements to insert");
   scanf("%d",&n);
    struct list *temp,*e,*t,*p,*l;
      for(i=0;i<n;i++)
    {  printf("enter the name\t");
        scanf("%s",temp->name);
        printf(" enter age\t");
           scanf("%d",&v);
   temp=(struct list*)malloc(sizeof(struct list));
   temp->age=v;
   temp->pname=NULL;
   temp->page=NULL;
   if(s==NULL)
   {
       s=temp;
       e=temp;

       l=temp;
   }
   else if(s!=NULL)
   {
     if(s->page==NULL)
     {
         if(temp->age>=s->age)
         {
             s->page=temp;
             s=temp;
         }

   else if(temp->age<=e->age)
         {
             temp->page=e;
             e=temp;

             l=temp;
         }


      else if(temp->age>e->age&&temp->age<s->age)
         { p=e->page;

            while(temp->age>p->age)
            {
                t=p;
                p=p->page;
            }
            temp->page=p;
            t->page=temp;

              }
         }
     }

         }
return e;

    }


void display(struct list *s)
{
    while(s!=NULL)
    {
       printf("\n%d",s->age);
       s=s->page;
    }
    }

int main()
{
struct list *phead=NULL;
struct list *pstart=NULL;
phead=create(phead,&pstart);
display(phead);
  }
