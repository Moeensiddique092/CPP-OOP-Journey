#include<iostream>
using namespace std;

class Product{
public:
    string name;
    float price;

    void showPrice(){
        cout <<"The " << name <<" Cost $"<< price << endl;
    }
};

int main(){
    Product item1;
    item1.name = "Laptop";
    item1.price = 545.6;
    item1.showPrice();

    Product item2;
    item2.name = "Keyboard";
    item2.price = 30.4;
    item2.showPrice();

    return 0;
}