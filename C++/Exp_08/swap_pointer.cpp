# include <iostream>
using namespace std;
void swap (int *a,int *b)
{
    int t= *a;
    *a=*b;
    *b=t;
}
int main ()
{
    int a=10 , b=20;
    cout<<"Before swapping "<<endl;
    cout<<" a = "<<a<<endl;
    cout<<" b = "<<b<<endl;
    swap (&a,&b);
    cout<<"After swapping"<<endl;
    cout<<" a = "<<a<<endl;
    cout<<" b = "<<b<<endl;
    return 0;
}
