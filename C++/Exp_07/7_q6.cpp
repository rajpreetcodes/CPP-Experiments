//Write user defined function “search” to search element is present in 1D array or not. Search function accepts
array and key to search as parameters. 
#include<iostream>
using namespace std;
void search(int a[100],int n,int n1,int i)
{
    int m;
    for(i=0;i<n;i++)
    {
        if(a[i]==n1)
        {
            cout<<"Number was found!";
            m=1;
            break;
        }
    }
    if(m!=1)
    {
        cout<<"Number was not found!";
    }
}
int main()
{
    int n,i,n1,a[100];
    cout<<"How many numbers?"<<endl;
    cin>>n;
    cout<<"Okay, enter numbers in array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Which number to search for?:";
    cin>>n1;
    search(a,n,n1,i);
    return 0;
}
