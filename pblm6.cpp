#include<iostream>
using namespace std;

class mammal{
public:
    mammal(){
    cout<<"Mammals can give direct birth"<<endl;
    }
};

class wingedanimal{
public:
    wigedanimal(){
    cout<<"Winged animals can flap"<<endl;
    }
};

class bat:public mammal,public wigedanimal
{
public:
    bat(){
    mammal();
    wigedanimal();
    cout<<"Bats are birds of midnight"<<endl;
    }
};

int main(){

    bat ob1;

return 0;
}
