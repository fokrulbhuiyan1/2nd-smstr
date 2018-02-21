#include<iostream>
using namespace std;

class DVD_DB {
    string dvdName;
    double dvdPrice;
    int dvdQty;

    public:
    DVD_DB()
    {
        dvdName = "Battlefield 1";
    }

    void setValue(double p, int q)
    {
        dvdPrice = p;
        dvdQty = q;
    }
    void showValue()
    {
        cout<<"Name: "<<dvdName<<endl;
        cout<<"Price: "<<dvdPrice<<"$"<<endl;
        cout<<"Quantity: "<<dvdQty<<endl;
    }
};

int main()
{
    DVD_DB object;

    object.setValue(49.99, 7);
    object.showValue();

    return 0;
}
