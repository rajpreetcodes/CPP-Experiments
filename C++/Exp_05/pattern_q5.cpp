#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    for(i=3;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
