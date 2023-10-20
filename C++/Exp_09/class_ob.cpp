#include<iostream>
#include<stdio.h>
using namespace std;
class emp
{
private:
    char name[30];
    int id;
public:
    void getdata()
    {
        fflush(stdin);
        cout<<"Enter the name:";
        gets(name);
        cout<<"Enter the id:";
        cin>>id;
    }
    void putdata()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Id:"<<id<<endl;
    }
};
int main()
{
    emp e[100];
    int i,n;
    cout<<"How many records?:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        e[i].getdata();
        e[i].putdata();
    }
    return 0;
}
