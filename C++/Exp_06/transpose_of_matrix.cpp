#include<iostream>
using namespace std;
int main()
{
    int i,j,a[10][10],b[10][10],m,n;
    cout<<"How many rows?"<<endl;
    cin>>m;
    cout<<"How many columns?"<<endl;
    cin>>n;
    cout<<"Enter matrix:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Matrix:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Transpose of a matrix:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j]=a[j][i];
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}

