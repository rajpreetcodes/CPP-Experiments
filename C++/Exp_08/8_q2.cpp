/*Define Structure called cricket that will describe the following data:
player name, country name, no. of matches played, batting average.
Develop a program that stores info of 10 players and display names
of players having batting average greater than 50*/
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
struct cricket
{
    char name[50],country[50];
    int matches;
    float avg;
}p[10];
int main()
{
    int i=0;
    for(;i<10;i++)
    {
         fflush(stdin);
        cout<<"Enter Player "<<i+1<<" Details:"<<endl;
        cout<<"Enter name:";
        gets(p[i].name);
        cout<<"Enter country:";
        gets(p[i].country);
        cout<<"Enter no. of matches played:";
        cin>>p[i].matches;
        cout<<"Enter batting average:";
        cin>>p[i].avg;
    }
     cout<<endl<<"**********////**********"<<endl<<endl;
     for(i=0;i<10;i++)
     {
        cout<<"Details of Player "<<i+1<<endl;
        cout<<"Name-"<<p[i].name<<endl;
        cout<<"Country-"<<p[i].country<<endl;
        cout<<"No. of Matches played-"<<p[i].matches<<endl;
        cout<<"Batting average-"<<p[i].avg<<endl;
     }
     cout<<endl<<"List of players with batting average greater than 50:"<<endl;
      for(i=0;i<10;i++)
     {
         if(p[i].avg>50)
         {
            cout<<p[i].name<<endl;
         }
     }
}
