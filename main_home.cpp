#include<iostream>
#include "Appliances.h"
using namespace std;

int main(){
    
    Light l1("Philips");
    l1.turnOn();

    Fan f1("PakFan");
    f1.turnOn();

    return 0;
}