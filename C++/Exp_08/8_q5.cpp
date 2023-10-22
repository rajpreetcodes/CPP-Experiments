//WAP to print string in reverse order using arrays
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[50],*p;
    int i=0;
    cout<<"Enter a string:";
    gets(a);
    p=a;
    while(a[i]!='\0')
    {
        i++;
    }
    i--;
    int j=0;
    char b[50];
   while(i>=0)
   {
       b[j]=*(p+i);
       i--;
       j++;
   }
   b[j]='\0';
   cout<<"Reverse of a string=";
   cout<<b;
}
