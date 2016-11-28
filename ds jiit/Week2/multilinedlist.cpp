#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct node
{
    char name[30];
    int age;
    node *an;
    node *ag;
}*head=NULL,*sn=NULL,*sa=NULL;
void create(struct node** sn,struct node**sa)
{
    struct node *temp ,*sa1,*sn1;
    char name1[20];
    int age1;

    cout<<"enter name and age of person\n";
    cin>>name1>>age1;

    temp = (struct node*)malloc(sizeof(struct node));
    strcpy(temp->name,name1);
    temp->age = age1;
    temp->an = NULL;
    temp->ag = NULL;

    if(head==NULL)
    {
        head = temp;
        sa = temp;
        sn = temp;

    }
    else
    {
            sn1 = sn;
           sa1 = sa;



     if(sa1->age > temp->age)
     {
         temp->ag = sa1;
         sa1 = temp;
     }
     else{ while(sa1!=NULL)
       {
        if((sa1->age<=temp->age)&&((sa1->ag->age >temp->age) || (sa1->ag==NULL)))
        { temp->ag= sa1->ag;
        sa1->ag = temp;
           }

           sa1 = sa1->ag;

        }

}
     if(strcmp(sn1->name,temp->name)>0)
     {
         temp->an = sn1;
         sn1 = temp;
     }
     else{

        while(sn1!=NULL)
       {
        if(strcmp(sn1->name,temp->name)<=0&&(strcmp(sn1->an->name,temp->name)> 0 || sn1->an==NULL))
        { temp->an= sn1->an;
        sn1->an = temp;
           }

           sn1 = sn1->an;

        }




        }

   return;
    }
}
void displaya(struct node*head)
{
     node *s1,*t1;
     s1=hea d;

     cout<<"age eisw :\n";

     t1= head;
     while(t1!=NULL)
     {

     cout<<t1->name<<"|"<<t1->age<<"--";
     t1= t1->ag;
     }

     if(t1==NULL)
     {
         cout<<"NULL\n";

     }
}
void displayn(struct node*head)
{
     node *s1,*t1;
     s1=head;

     cout<<"alphabatecally :\n";

     t1= head;
     while(t1!=NULL)
     {

     cout<<t1->name<<"|"<<t1->age<<"--";
     t1= t1->ag;
     }

     if(t1==NULL)
     {
         cout<<"NULL\n";

     }
}
int main()
{
    node *aname=NULL,*aage=NULL;
    node*h1;
    cout<<"enter how many records\n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    create(head);



    displayn(aname);
    displaya(aage);

}
