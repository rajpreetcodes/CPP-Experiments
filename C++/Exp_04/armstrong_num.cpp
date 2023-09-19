#include<iostream>
using namespace std;
int main()
{
    int r,n,num,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    num=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==num)
    {
        cout<<"This is an armstrong number!";
    }
    else
    {
        cout<<"This is not an armstrong number!";
    }
    return 0;
}
