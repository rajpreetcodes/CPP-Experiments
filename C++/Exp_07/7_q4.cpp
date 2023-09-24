//WAP using user defined function to calculate and return factorial of a given integer. 
#include<iostream>
using namespace std;
int fact(int n)
{
    int m=1,i;
    for(i=1;i<=n;i++)
    {
        m=m*i;
    }
    return m;
}
int main()
{
    int n,f;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    f=fact(n);
    cout<<"Factorial of number="<<f;
    return 0;
}

