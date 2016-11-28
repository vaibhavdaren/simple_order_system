#include<stdio.h>
#include<malloc.h>
#include<iostream>
using namespace std;
struct stu
{
  char name[100];
  struct stu *down;
  struct marks *link;
  };
  struct marks
  {
   int a;
   struct marks *next;
   };
struct marks *createmark(struct marks *s)
{
    struct marks *temp,*e,*p;
    int i,j,k,n;
    printf("\nhow many subjects");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        temp=(struct marks *)malloc(sizeof(struct marks));
        scanf("%d",&temp->a);
        temp->next=NULL;
        if(s==NULL)
        {
            s=temp;
            e=temp;

        }
        else
        {
            e->next=temp;
           e=temp;

        }

    }
     return s;
    }
struct stu *create(struct stu * start)
{
   struct stu *p, *temp,*m,*l,*e;
   int i,j,k,n;
   printf("how many names u wanna enter??\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      temp=(struct stu*)malloc(sizeof(struct stu));
      printf("\nenter the name");
      scanf("%s",temp->name);
      temp->down=NULL;
      temp->link=NULL;
      printf("press 1 if u wanna  enter the marks");
      scanf("%d",&k);
      if(k==1)
      {
          temp->link=createmark(temp->link);
      }
      if(start==NULL)
      {
         start=temp;
         e=temp;
         }
         else
         {
            e->down=temp;
            e=temp;
            }
      }
      return start;
   }

void display(struct stu *s)
{

     while(s!=NULL)
     {
       printf("\n\n the list of the students are");
         printf("%s\t",s->name);
         struct marks *p;
         p=s->link;
         while(p!=NULL)
         {

             printf("\t%d",p->a);
             p=p->next;
         }
         printf("\n");
         s=s->down;
     }
}
int main()
{
  struct stu *head=NULL;
  printf("enter names\n");
  head=create(head);
  display(head);

  }
