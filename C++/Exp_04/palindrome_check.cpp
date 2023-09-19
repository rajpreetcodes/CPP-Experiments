#include<iostream>
using namespace std;
int main()
{
    int n,num,r,t;
    cout<<"Enter a number:";
    cin>>n;
    r=0;
    num=n;
    while(n!=0)
    {
        t=n%10;
        r=(r*10)+t;
        n=n/10;
    }
    if(num==r)
    {
    cout<<"It is a palindrome!";
    }
    else
        {
            cout<<"It is not a palindrome!";
        }
    return 0;
}
