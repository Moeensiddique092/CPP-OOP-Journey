#pragma once
#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    string name;
    int gradeLevel;
public:

    Student(string n , int g);

    void setGrade(int g);

    int getGrade();

    void introduceSelf();
};    