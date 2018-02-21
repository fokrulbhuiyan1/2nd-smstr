#include<iostream>
using namespace std;

class Bus{
    int numberOfseats;
    double topSpeedInMile;
public:
    void setbus(int n,double t){
    numberOfseats=n;
    topSpeedInMile=t;
    }
    void getbus(){
    cout<<"number Of seats "<<numberOfseats<<endl;
    cout<<"topSpeed In Mile "<<topSpeedInMile<<endl;
    }

    void convertspeedtokm(){
    float kmofb;
    kmofb=topSpeedInMile/.54;
    cout<<"mile/hr to kilometer/hr "<<kmofb<<endl;
    }

};

class Ship{
    int numberOfDecks;
    double topSpeedinNauticalMile;
public:
    void setship(int nd,double tnm){
    numberOfDecks=nd;
    topSpeedinNauticalMile=tnm;
    }
    void getship(){
    cout<<"number Of Decks "<<numberOfDecks<<endl;
    cout<<"topSpeed in Nautical Mile "<<topSpeedinNauticalMile<<endl;
    }

    void convertspeedtoknm(){
    float kmofs;
    kmofs=topSpeedinNauticalMile/.54;
    cout<<"nautical mile/hr to kilometer/hr "<<kmofs<<endl;
    }


};

class Transport:public Bus,public Ship {
public:
    string engineType;
    string fuelType;
    virtual void printDetails() = 0;
    virtual void printSpeed() = 0;
};

int main(){
    Transport *pt;

    pt->setbus(50,60.5);
    pt->setship(500,70.8);
    pt->getbus();
    pt->convertspeedtokm();
    pt->getship();
    pt->convertspeedtoknm();
    pt->printDetails();
    pt->printSpeed();



return 0;
}
