#include<iostream>
#include<string>
using namespace std;

class user
{
private:
    int id;
public:
    static int userCount;

    //Constructor
    user(){
        userCount++;
        id = userCount;
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
};

int user::userCount = 0;

int main(){

    user u1;
    user u2;
    {
        
        cout << " entering Inner Block" << endl;
        user u3;
    }
    cout << "leaving inner block." << endl;

    

    user::displayTotalUser();

    return 0;
}