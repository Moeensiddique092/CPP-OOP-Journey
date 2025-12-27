#include<iostream>
using namespace std;
class  Student{
    private:
    string name;
    int gradeLeval;

    public:
    Student(string n, int g){
        name = n;
        gradeLeval = g;
        gradeLeval = 0;

        if (g < 0){
            cout << "Grade can't be negative!" << endl;
        } else {
            gradeLeval = g;
        }
    }

    void Setgrade(int g){
        if (g < 0){
            cout<<"Error! Invalid grade."<<endl;
        } else{
            gradeLeval = g;
            cout<< "Grade Updated to "<< g <<endl;
        }
    }

    int getGrade(){
        return gradeLeval;
    }

    void introduceSelf(){
        cout<<"Hi I am "<< name << " I am in grade" <<" "<< gradeLeval << endl;
    }
};

int main(){

    Student student1("Ali", 5);
   student1.Setgrade(8);
   student1.getGrade();
   student1.introduceSelf();

    Student student2("Ahmad", 6);
    student2.Setgrade(9);
    student2.getGrade();
    student2.introduceSelf();

    return 0;
}
