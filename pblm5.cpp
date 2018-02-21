#include<iostream>
using namespace std;

class employees{
int phone,hiredate;
double salary;
string address,DOB;
public:
    void setemployees(double s,int h,int p,string d,string a){
    salary=s;
    hiredate=h;
    phone=p;
    DOB=d;
    address=a;
        cout<<"1 month salary is "<<s<<endl;
        cout<<"Hiremonth is "<<h<<endl;
        cout<<"phone number is "<<p<<endl;
        cout<<"Date of birth "<<d<<endl;
        cout<<"Address "<<a<<endl;
    }
    void showemployees(){
        double p;
        p=salary+(salary*.1);
    if(hiredate>12){
        cout<<"salary with bonus "<<p<<endl;
    }
    else{
        cout<<"salary without bonus "<<salary<<endl;
    }
    }
};

class departments{
string dname,location;
double budget;
public:
    void setdepartments(string de,string ln,double bt){
    dname=de;
    location=ln;
    budget=bt;
    cout<<"dname is "<<de<<endl;
    cout<<"department location "<<ln<<endl;
    cout<<"Total budget "<<bt<<endl;
    }

};

class branches:public departments,public employees
{
string location;
int managerid;
public:
    void setbranches(string lt,int ID){
    location=lt;
    managerid=ID;
    cout<<"Branch Location is "<<lt<<endl;
    cout<<"Manager ID is "<<ID<<endl;
    }
};

int main(){
    branches ob1;
    ob1.setemployees(5000,13,1234567890,"5th june,1990","Dhaka");
    ob1.showemployees();
    ob1.setdepartments("Manager","Banani",1431.412);
    ob1.setbranches("Dhaka Bank",1234);





return 0;
}
