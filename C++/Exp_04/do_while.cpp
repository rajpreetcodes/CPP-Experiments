#include<iostream>
using namespace std;
int main()
{
    int n,c1=0,c2=0,c3=0;
    char a;

    do
    {
        cout<<"Enter a number:";
        cin>>n;
        if(n>0)
        {
           c1++;
        }
        else if(n<0)
        {
            c2++;
        }
        else if(n==0)
        {
            c3++;
        }
        cout<<"Do you want to continue?";
        cin>>a;
        if(a=='y' || a=='Y')
        {
            continue;
        }
        else if(a=='n' || a=='N')
        {
            break;
        }
        else
        {
            cout<<"Error";
            break;
        }
    }while(a=='y' || a=='Y');
    cout<<"count of positive number="<<c1<<endl;
    cout<<"count of negative number="<<c2<<endl;
    cout<<"count of zeros="<<c3;
    return 0;
}
