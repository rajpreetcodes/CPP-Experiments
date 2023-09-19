#include<iostream>
using namespace std;
int main()
{
    int n,r,i;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Reversed number=";
    for(;n!=0;)
    {
        r=n%10;
        cout<<r;
        n=n/10;
    }
    return 0;
}
