#pragma once
#include "Person.h"
#include<iostream>
#include<string>
using namespace std;

class Student : public Person
{
private:
    int gradeLevel;
public:

    Student(string n , int g);

    void setGrade(int g);

    int getGrade();

    void introduceSelf();
};    