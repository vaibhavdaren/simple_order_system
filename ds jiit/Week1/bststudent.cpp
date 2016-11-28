#include <stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct data
{
    string name;
    int rollno;
    float cgpa;
} ;
struct node
{
    struct data;
    struct node* left;
    struct node* right;
};


/* Driver program to test sameTree function*/

  int main ()
{
  char str [80];
  float f;
  int r;
  string n;

  FILE * pFile;
  pFile = fopen ("records.txt","r+");

  {
        fscanf (pFile, "%s %d %f", &r,&n,&n);
        cout<<r<<n<<n<<endl;

  }
  fclose (pFile);
  return 0;
}

