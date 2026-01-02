#pragma once
#include<iostream>
#include<string>
using namespace std;

class Person
{
protected:
    string name;
public:

    Person(string n){
        name = n;
    }

    virtual void introduceSelf() = 0;
};