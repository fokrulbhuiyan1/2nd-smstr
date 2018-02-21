#include<iostream>
#include<string>
using namespace std;
class retailCenters;

class abcTransports{
    friend class retailCenters;
private:
    int scheduleNo;
    string type;
    string delevaryRoute;
public:
    void setABCT(int sn, string t, string dr){
    scheduleNo=sn;
    type=t;
    delevaryRoute=dr;
    }
    void getABCT(){
    cout<<scheduleNo<<endl;
    cout<<type<<endl;
    cout<<delevaryRoute<<endl;

    }
    void display(){
    cout<<"Enter Type:"<<endl;
    cin>>type;
    //getline(cin,type);
    cout<<type;
    }
};
class retailCenters{
private:
    int ID;
    string address;
public:
    void setRC(int a , string b ){
    ID=a;
    address=b;
    }
    void getRC(){
    cout<<ID<<endl;
    cout<<address<<endl;

    }
    void showDR(abcTransports ob){
    cout<<ob.delevaryRoute<<endl;

    }
};
class shippedItems{
private:
int number;
float weight;
float length;
float breadth;
float height;
string destination;
string finalDelivaryDate;
static int i;

public:
shippedItems(){
i++;
cout<<"Total Shipped Item: "<<i<<endl;
}
void setSI(int n,float w, float l,float b, float h, string d, string fdd){
number=n;
weight=w,
length=l;
breadth=b;
height=h;
destination=d;
finalDelivaryDate=fdd;
}
void getSI(){
cout<<number<<endl;
cout<<weight<<endl;
cout<<length<<endl;
cout<<breadth<<endl;
cout<<height<<endl;
cout<<destination<<endl;
cout<<finalDelivaryDate<<endl;
}
void itemType(){
if (weight>25){
    cout<<"priority Item"<<endl;

}
else{
    cout<<"ordinary Item"<<endl;
}

}
};
int shippedItems::i=0;

int main(){
shippedItems ot1;
ot1.setSI(1,24.5,12.4,23.5,5.4,"Uttara","21/11/2016");
ot1.getSI();
ot1.itemType();
abcTransports ob1;
ob1.setABCT(111,"flight","chittangong-banani-uttara");
ob1.getABCT();
//ob1.display();
retailCenters oc1;
oc1.setRC(11,"Chittagong");
oc1.getRC();
oc1.showDR(ob1);
shippedItems ot2;


}
