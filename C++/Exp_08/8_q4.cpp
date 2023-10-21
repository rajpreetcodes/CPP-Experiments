//WAP to print array using pointer
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[100],n,i,*p;
    cout<<"How many numbers:";
    cin>>n;
    cout<<"Enter the numbers"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"array elements using pointer:";
    for(i=0;i<n;i++)
    {
        //cout<<a[i]<<endl;
        cout<<*(p+i)<<endl;
    }
    return 0;
}
