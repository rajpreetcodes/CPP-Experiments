#include<iostream>
using namespace std;
int main()
{
    int i,n,a[100],temp;
    cout<<"Enter how many numbers to enter in array?:";
    cin>>n;
    cout<<"Enter array elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-1-i]=temp;
    }
    cout<<"Reversed elements of array:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
