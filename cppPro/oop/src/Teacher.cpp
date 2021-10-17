#include<iostream>
#include "../include/Teacher.h"
using namespace std;

Teacher::Teacher(string name,int age)
{
    cout << "construct init " << name << ":" << age << endl;
    nameT = name;
    ageT = age;
}

Teacher::~Teacher()
{
    cout << "construct ~Teacher " << endl;
}

void Teacher::setSalary(int salary)
{
    salary = salary;
}

int Teacher::getSalary()
{
    return salary;
}

string Teacher::getName()
{
    return nameT;
}

int Teacher::getAge()
{
    return ageT;
}


