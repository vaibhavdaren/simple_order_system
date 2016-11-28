#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
int n, i = 3, count, c;
 long long int sumx=0;
   printf("Enter the number of prime numbers required\n");
   scanf("%d",&n);

   if ( n >= 1 )
   {
      sumx=2;
   }

   for ( count = 2 ; count <= n ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
          if(i<200000){
          cout<<"Number: "<<count<<"\tValue :"<<i<<endl;
         sumx=sumx+i;
         count++;}
         else
         {
             break;
         }
      }
      i++;

   }
 cout<<"Sumx Finale value : "<<sumx<<endl;
   return 0;
}

