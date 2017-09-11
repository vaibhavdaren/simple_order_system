#include<iostream>
#include<string>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_RLEN 50

/* Returns the Run Length Encoded string for the
   source string src */
char *encode(char *src)
{
  int rLen;
  char count[MAX_RLEN];
  int len = strlen(src);

  /* If all characters in the source string are different,
    then size of destination string would be twice of input string.
    For example if the src is "abcd", then dest would be "a1b1c1d1"
    For other inputs, size would be less than twice.  */
  char *dest = (char *)malloc(sizeof(char)*(len*2 + 1));

  int i, j = 0, k;

  /* traverse the input string one by one */
  for(i = 0; i < len; i++)
  {

    /* Copy the first occurrence of the new character */
    dest[j++] = src[i];

    /* Count the number of occurrences of the new character */
    rLen = 1;
    while(i + 1 < len && src[i] == src[i+1])
    {
      rLen++;
      i++;
    }

    /* Store rLen in a character array count[] */
    sprintf(count, "%d", rLen);

    /* Copy the count[] to destination */
    for(k = 0; *(count+k); k++, j++)
    {
      dest[j] = count[k];
    }
  }

  /*terminate the destination string */
  dest[j] = '\0';
  return dest;
}
using namespace std;
int main()
{
char s[100005];
cin>>s;
int c=0,i,j;
int n=strlen(s);
char *res=encode(s);
int l=strlen(res);
char p[l];
int k=0;
for(i=0;i<l;i+2)
{
    p[k]==res[i];
    k++;
}
while(1&&k>=0)
{
    if(p[k]=='0')
        k--;
    else
        break;
}
cout<<k<<endl;
}