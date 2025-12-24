#include<iostream>
using namespace std;
class  Student{
    public:
    string name;
    int gradeLeval;

    void introduceSelf(){
        cout<<"Hi I am "<< name << " I am in grade" <<" "<< gradeLeval << endl;
    }
};

int main(){

    Student student1;
    student1.name = "Ali";
    student1.gradeLeval = 5;
    student1.introduceSelf();

    Student student2;
    student2.name = "Hassan";
    student2.gradeLeval = 6;
    student2.introduceSelf();

    return 0;
}
