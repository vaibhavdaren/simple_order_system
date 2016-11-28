#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<ctype.h>
//vaibhav copyright


#define size 5000
struct stack {
   char s[size];
   int top;
} st;

int stfull() {
   if (st.top >= size - 1)
      return 1;
   else
      return 0;
}

void push(char item) {
   st.top++;
   st.s[st.top] = item;
}

int stempty() {
   if (st.top == -1)
      return 1;
   else
      return 0;
}

int pop() {
   char item;
   item = st.s[st.top];
   st.top--;
   return (item);
}

void display() {
   int i;
   if (stempty())
       {
       ;
   }
   else {
      for (i = st.top; i >= 0; i--)
         printf("%c", st.s[i]);
   }
}

int main() {
   st.top = -1;

char *s=(char*)malloc(sizeof(char)*128);
    scanf("%[^\n]s", s);

    int l=strlen(s);
    int i,j,k;
if(l==0)
{
    std::cout<<l;
    return 0;
}
else
{


    for(i=0;i<l;i++)
           {
        if(isalnum(s[i]))
            {
            push(s[i]);
            }
        else
            {
            display();
            st.top=-1;
            if(s[i]!='\n')
            printf("%c",s[i]);
            }
    }
    if(i==l)
        {
        display();
    }}
    return 0;
}
