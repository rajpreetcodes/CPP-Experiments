#include<iostream>
using namespace std;
int main()
{
    int a[100],i,n,m;
    bool search;
    cout<<"How many numbers?"<<endl;
    cin>>n;
    cout<<"Enter numbers into array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Which number to search for in array?:";
    cin>>m;
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            search=true;
        }
    }
    if(search==true)
    {
        cout<<"Number was found!";
    }
    else if(search==false)
    {
        cout<<"Number was not found!";
    }
    return 0;
}
