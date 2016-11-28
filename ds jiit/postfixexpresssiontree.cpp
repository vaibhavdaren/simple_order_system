#include<iostream>
#include<string.h>
#include<stack>

struct node
{
  struct node *left,*right;
  char data;
};

void postorder(struct node *root)
{

    if(root)
    {
        postorder(root->left);
        postorder(root->right);
        std::cout<<root->data;

    }
}

void inorder(struct node *root)
{

    if(root)
    {
        inorder(root->left);
        std::cout<<root->data;
        inorder(root->right);

    }
}
void preorder(struct node *root)
{

    if(root)
    {
        std::cout<<root->data;
        preorder(root->left);
        preorder(root->right);

    }
}


int main()
{  std::stack <node *> s;

    struct node *t1,*t2;
    int i;
struct node *root=NULL;
  char a[100];
  std::cout<<"enter postorder string";
  std::cin>>a;
  for(i=0;i<strlen(a);i++)
  {
    if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='%'||a[i]=='/')
       {
            root=new struct node;
          root->data=a[i];

          t1=s.top();
          s.pop();
          t2=s.top();
          s.pop();
          root->left=t2;
          root->right=t1;
          s.push(root);

          }
        else
        {

         root=new struct node;
          root->data=a[i];
          root->left=root->right=NULL;

          s.push(root);
    }

        }
         root=s.top();
         s.pop();

if((s.empty())==1)
{std::cout<<"\n TREE created succesfully\n";
std::cout<<"\nPOSTORDER TRAVERSAL=\n";
postorder(root);
std::cout<<"\nINORDER TRAVERSAL=\n";
inorder(root);
std::cout<<"\nPRE ORDER TRAVERSAL=\n";
preorder(root);
  }
else
    std::cout<<"\nBINARY TREE CANT BE CREATED";
}
