#include<iostream>
using namespace std;
int main()
{
    int n,r1,r2,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    r1=n%10;
    while(n>=100)
    {
        r2=n%10;
        n=n/10;
    }
    cout<<"Second digit="<<r2<<endl;
    sum=r1+r2;
    cout<<"Sum="<<sum;
    return 0;
}
