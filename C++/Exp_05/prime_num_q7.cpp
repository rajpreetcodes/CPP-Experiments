#include<iostream>
using namespace std;
int main()
{
    int i,j,n,n1,k,num,r,sum;
    cout<<"Enter first limit:";
    cin>>n;
    cout<<"Enter second limit(greater than previous number):";
    cin>>n1;
    for(i=n;i<=n1;i++)
    {
        for(j=1;j<=i;j++)
    {
        if(i%j==0)
        {
            k++;
        }
    }
    if(k==2)
    {
        cout<<i<<endl;
    }
        k=0;
    }
    return 0;
    }

