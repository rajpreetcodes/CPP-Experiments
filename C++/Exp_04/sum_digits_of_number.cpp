#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,r;
    cout<<"Enter a number:";
    cin>>n;
    for(;n!=0;n=n/10)
    {
        r=n%10;
        sum=sum+r;
    }
    cout<<"Sum of individual digits="<<sum;
    return 0;
}
