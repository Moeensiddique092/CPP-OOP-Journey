#include<iostream>
#include<string>
using namespace std;

class user
{
private:
    int id;
    string name;
public:
    static int userCount;

    //Constructor
    user(){
        userCount++;
        id = userCount;
        cout << "User " << id << " created." << endl;
        name = "Unknown";
    }
    user(string n){
        userCount++;
        id = userCount; 
        name = n;
        cout << "User " << id << " created." << endl;  
    }

    //Distructor
    ~user(){
        userCount--;
        cout << "User " << id << " deleted." << endl;
    }

    static void displayTotalUser(){
        cout << "Total users: " << userCount << endl;
    }

    void Display(){
        cout << "ID: " << id << " Name: " << name << endl;
    }
};

int user::userCount = 0;

int main(){

    user u1;
    user u2("Moeen");
    {
        
        cout << " entering Inner Block" << endl;
        user u3;
    }
    cout << "leaving inner block." << endl;

    u1.Display();
    u2.Display();
    
    user::displayTotalUser();

    return 0;
}