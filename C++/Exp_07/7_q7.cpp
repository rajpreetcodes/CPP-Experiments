//Write a program to print Fibonacci series up to n using recursion. 
#include<iostream>
using namespace std;
int main()
{
    int n,n1=0,n2=1,n3,i;
    cout<<"Till what number do you want the sequence?"<<endl;
    cin>>n;
    cout<<"Fibonacci series upto n numbers:"<<endl;
    cout<<n1<<"\t"<<n2<<"\t";
    for(i=0;i<n-2;i++)
    {
        n3=n1+n2;
        cout<<n3<<"\t";
        n1=n2;
        n2=n3;
    }
    return 0;
}
