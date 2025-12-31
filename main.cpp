#include<iostream>
#include "Student.h"
#include "Teacher.h"
using namespace std;
int main(){

    Student s1("Moeen", 3);
    s1.introduceSelf();

    s1.setGrade(4);
    cout << "Grade successfully updated to " <<s1.getGrade() <<endl;

    Teacher T1("Dr.Irfan", 50000);
    T1.introduceSelf();
    T1.setSalary(60000);
    cout << "Salary updated to " << T1.getSalary() << endl;
    return 0;
}