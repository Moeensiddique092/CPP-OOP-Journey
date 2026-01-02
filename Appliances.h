#include<iostream>
#include<string>
using namespace std;

class  Appliance
{
protected:
    string brand;
public:
     Appliance(string b){
        brand = b;
     }

    virtual void turnOn() = 0;
};

class Light : public Appliance
{
public:
    Light(string b) : Appliance(b) {}

   
    void turnOn(){
        cout << brand << " is now GLOWING." << endl;
    }
};

class Fan : public Appliance
{
public:
    Fan (string b) : Appliance(b) {}

    void turnOn(){
        cout << brand << " is now SPINNING." << endl;
    }
};