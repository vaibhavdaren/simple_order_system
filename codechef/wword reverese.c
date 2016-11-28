#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define size 5000
using namespace std;
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

        char s[128];

    scanf("%[^\n]s", s);

    int l=strlen(s);
    int i,j,k;
    for(i=0;i<l;i++)
           {
    cout<<"Current Letter: "<<s[i]<<endl;
        if(isalnum(s[i]))
            {
        cout<<"Pushed to Stack: "<<s[i]<<endl;
            push(s[i]);
            }
        else
            {
                        cout<<"\nNot Numeric:  "<<s[i]<<endl;

            display();
            st.top=-1;
            if(s[i]!='\n')
            printf("%c",s[i]);
            }
    }
    return 0;
}
