#include<iostream>
using namespace std;
void fact(int n)
{
    int m=1,i;
    for(i=1;i<=n;i++)
    {
        m=m*i;
    }
    cout<<"Factorial of number="<<m;
}
int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    fact(n);
    return 0;
}
