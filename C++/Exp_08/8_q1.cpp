/*Define structure student having data members : Roll no, Name, Address,
 Branch, Percentage. WAP to read and display info of a student*/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
struct stud
{
    char name[50],add[50],branch[30];
    int roll;
    float percent;
}s;
int main()
{
    cout<<"Details of student:"<<endl;
    cout<<"Enter name:";
    gets(s.name);
    fflush(stdin);
    cout<<"Enter address:";
    gets(s.add);
    cout<<"Enter branch:";
    gets(s.branch);
    cout<<"Enter roll no:";
    cin>>s.roll;
    cout<<"Enter percentage:";
    cin>>s.percent;
    cout<<endl<<"**********////**********"<<endl<<endl;
    cout<<"Student details:"<<endl;
    cout<<"Name-"<<s.name;
    cout<<"\nAddress-"<<s.add;
    cout<<"\nRoll no-"<<s.roll;
    cout<<"\nBranch-"<<s.branch;
    cout<<"\nPercentage-"<<s.percent;
    return 0;

}
