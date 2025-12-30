#include "Student.h"
#include<iostream>
using namespace std;

Student::Student(string n, int g){
    name = n;
    if (g < 0){
        cout << "Error! grades cannot be nagative." <<endl;
    } else{
        gradeLevel = g;
    }
}

void Student::introduceSelf(){
    cout << "I am " << name << ", and I Got " << gradeLevel << " grades." <<endl;
}

void Student::setGrade(int g){
    if ( g < 0){
        cout << "Error! grades cannot be nagative." <<endl;
        gradeLevel = 0;
    } else{
        gradeLevel = g;
    }
}

int Student::getGrade(){
    return gradeLevel;
}