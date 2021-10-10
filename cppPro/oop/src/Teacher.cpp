#include "../include/Teacher.h"

Teacher::Teacher(string name,int age)
{
    name = name;
    age = age;
}

Teacher::~Teacher()
{
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
    return name;
}

int Teacher::getAge()
{
    return age;
}


