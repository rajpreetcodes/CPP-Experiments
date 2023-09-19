#include<iostream>
using namespace std;
int main()
{
    int i,n,num,r,sum=0,m;
    cout<<"Enter a number:";
    cin>>n;
    num=n;
    while(n!=0)
    {
        r=n%10;
        m=1;
        for(i=1;i<=r;i++)
        {
            m=m*i;
        }
        sum=sum+m;
        n=n/10;
    }
    if(sum==num)
    {
        cout<<"This is a strong number";
    }
    else
    {
        cout<<"This is not a strong number";
    }
    return 0;
}
