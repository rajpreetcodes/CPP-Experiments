/*There are 50 computers in an office. every computer has following information:
CPU Type, hard disk size.WAP to store details of all 50 computers and then print
the details of computers having hard disk greater than 8GB*/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
struct comp
{
    char type[20];
    float disk;
}c[50];
int main ()
{
    int n,i;
    cout<<"How many entries?:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        cout<<"Enter details of CPU "<<i+1<<endl;
        cout<<"Enter CPU Type:";
        gets(c[i].type);
        cout<<"Enter hard disk storage:";
        cin>>c[i].disk;
    }
     cout<<"**********////**********"<<endl;
     cout<<"List of computers with hard disk storage greater than 8GB:"<<endl;
    for(i=0;i<n;i++)
    {
        if(c[i].disk>8)
        {
            cout<<"Details of Computer "<<i+1<<endl;
            cout<<"CPU Type-"<<c[i].type<<endl;
            cout<<"Hard disk storage-"<<c[i].disk<<endl;
        }
    }
    return 0;
}
