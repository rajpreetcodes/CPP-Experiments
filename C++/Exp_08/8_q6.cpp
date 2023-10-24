//WAP to copy one string to another using a pointer and display it.
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[50],b[50],*p;
    int i=0,l;
    cout<<"Enter a string:";
    gets(a);
    p=a;
    while(a[i]!='\0')
    {
        l++;
        i++;
    }

    for(i=0;i<=l;i++)
    {
        b[i]=*(p+i);
    }
    cout<<"Copied string:"<<b;
    return 0;
}
