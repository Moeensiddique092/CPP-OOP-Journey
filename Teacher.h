#pragma once
#include<iostream>
#include<string>
#include "Person.h"
using namespace std;

class Teacher : public Person
{
private:
    int salary;

public:
    Teacher(string n, int s);

    void setSalary(int s);

    int getSalary();

    void introduceSelf();
};
