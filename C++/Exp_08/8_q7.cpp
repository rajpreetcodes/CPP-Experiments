//WAP to count number of vowels and consonants in a string using pointers.
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
  char a[100];
  int v=0,c=0,i;
  char *p;
  cout<<"Enter any string:";
  gets(a);
  strlwr(a);
  p=a;
  i=0;
  while(*(p+i)!='\0')
  {
      if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
      {
          v++;
      }
      else
    {
        c++;
    }
    i++;
  }
  cout<<"Number of consonants="<<c<<endl;
  cout<<"Number of vowels="<<v;
}

