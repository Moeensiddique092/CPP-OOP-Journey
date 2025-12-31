#include<iostream>
#include "Teacher.h"
using namespace std;

Teacher :: Teacher(string n, int s) : Person(n)
{
    if (s < 0){
        cout << "Error! salary cannot nagative." <<endl;
        salary = 0;
    }else{
        salary = s;
    }
}

void Teacher::introduceSelf(){
    cout << "I am " << name << " I earn $" << salary <<endl;
}

void Teacher ::setSalary(int s){
    if (s < 0){
        cout << "Error! salary cannot nagative." << endl;
        salary = 0;
    } else {
        salary = s;
    }
}

int Teacher ::getSalary(){
    return salary;
}