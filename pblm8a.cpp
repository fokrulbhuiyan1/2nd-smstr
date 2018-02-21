#include <iostream>
using namespace std;
class PoweredDevice
{
public:
    PoweredDevice(int power)
    {
        cout<<"Value Of Power : "<<power<<endl;
    }
};
class Scanner:virtual public PoweredDevice
{
public:
    Scanner(int scanner, int power):PoweredDevice(power)
    {
        cout<<"value of scanner : "<<scanner<<endl;
    }

};
class Printer:virtual public PoweredDevice
{
public:
    Printer(int printer, int power):PoweredDevice(power)
    {
        cout<<"Value of Printer :"<<printer<<endl;
    }

};
class PhotoCopier: public Scanner, public Printer
{
public:
    PhotoCopier(int scanner, int printer, int power):Scanner(scanner, power), Printer(printer, power), PoweredDevice(power)
    {

    }
};
int main()
    {
        PhotoCopier Copier(1, 2, 3);

        return 0;
    }
