/*Class “Employee” has data members: Emp_id, Emp_name and Emp_sal and this class uses
a parameterized constructor to accept the details of 2 employees and display the results
using the display () function.*/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class emp
{
private:
    char name[50];
    int id;
    float sal;
public:
    emp(char ename[50],int eid, int esal)
    {
        strcpy(name,ename);
        id=eid;
        sal=esal;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Id:"<<id<<endl;
        cout<<"Salary:"<<sal<<endl;
    }
};
int main()
{
    emp e1("Rajpreet",69,69420);
    emp e2("Niharika",420,700000);
    e1.display();
    e2.display();
}

