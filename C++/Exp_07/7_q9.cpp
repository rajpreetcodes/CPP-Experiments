#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[50],b[50];
    int i=0,n;
    fflush(stdin);
    cout<<"Enter string 1:";
    gets(a);
    while(a[i]!='\0')
    {
        b[i]=a[i];
        i++;
    }
    b[i]='\0';
    cout<<"Outputting copied string:";

    cout<<b;

    return 0;
}
