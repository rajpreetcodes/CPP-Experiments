#include<iostream>
using namespace std;
int main()
{
    int i,n,j=2,a[100],b=0;
    cout<<"How many numbers?:";
    cin>>n;
    cout<<"ENTER THE NUMBERS:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Prime numbers in array are:";
    for(i=0;i<n;i++)
    {
       while(a[i]%j!=0)
       {
           j++;
           b++;
       }
       if(a[i]==b)
       {
           cout<<a[i]<<endl;
       }
       else
       {
           cout<<"";
       }
    }
    return 0;
}
