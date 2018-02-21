#include<iostream>
using namespace std;

class student{
int studentID;
string StudentName;
double cgpa;
public:
    student(){
    cout<<"Default"<<endl;
    }
    void setstudent(string sn,int id,double c){
    StudentName=sn;
    studentID=id;
    cgpa=c;
    }
    void showstudent(){
    cout<<"Student name "<<StudentName<<endl;
    cout<<"Student ID "<<studentID<<endl;
    cout<<"CGPA "<<cgpa<<endl;
    }
};

class GraduateStudent:public student{
int level;
int year;
int programID;
public:
    GraduateStudent(){
    cout<<"Default"<<endl;
    }
    void setGStudent(int l,int y){
    level=l;
    year=y;
    }
    void getProgram(int deptID){
    programID=deptID;
    }
    void showGStudent(){
    cout<<"Level is "<<level<<endl;
    cout<<"Year is "<<year<<endl;
    cout<<"Program ID '1.CSE 2.EEE 3.BBA'   "<<programID<<endl;
    }
};

int main(){
    GraduateStudent ob1;
    ob1.setstudent("Piash",121345,3.5);
    ob1.showstudent();
    ob1.setGStudent(2,2017);
    ob1.getProgram(1);
    ob1.showGStudent();

return 0;
}
