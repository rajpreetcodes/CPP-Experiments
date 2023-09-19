#include<iostream>
using namespace std;
int main()
{
    int i,j,n,n1,num,r,sum;
    cout<<"Enter first limit:";
    cin>>n;
    cout<<"Enter second limit(greater than previous number):";
    cin>>n1;
    for(i=n;i<=n1;i++)
    {
        sum=0;
        num=i;
        while(num!=0)
    {
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }
    if(sum==i)
    {
        cout<<i<<endl;
    }
    }
    return 0;

}
