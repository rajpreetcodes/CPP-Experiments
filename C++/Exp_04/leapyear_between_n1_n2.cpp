#include<iostream>
using namespace std;
int main()
{
    int i,n1,n2;
    cout<<"Enter n1 and n2(n2>n1)"<<endl;
    cin>>n1>>n2;
    cout<<"The leap years are:"<<endl;
    for(i=n1;i<=n2;i++)
    {
        if(i%4==0 && i%100!=0 || i%400==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
