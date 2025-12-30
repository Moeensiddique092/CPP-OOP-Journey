#include<iostream>
#include "Student.h"
using namespace std;
int main(){

    Student s1("Moeen", 3);
    s1.introduceSelf();

    s1.setGrade(4);
    cout << "Grade successfully updated to " <<s1.getGrade() <<endl;
    return 0;
}