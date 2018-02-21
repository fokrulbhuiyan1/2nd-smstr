#include<iostream>
 using namespace std;
 class building{
 int number_of_floors;
 int square_footage;
 public:
     int Setvalues(int x, int y){
     number_of_floors=x;
     square_footage=y;
     }
     int Getvalues(){
     cout<<number_of_floors<<endl;
     cout<<square_footage<<endl;
     }
 };
 class house:public building{
 int bedrooms;
 int bathrooms;
 public:
     int setvalues(int a, int b){
     bedrooms=a;
     bathrooms=b;
     }
     int getvalues(){
     cout<<bedrooms<<endl;
     cout<<bathrooms<<endl;
     }
};
int main()
{
    house obj;
    obj.Setvalues(5,5000);
    obj.Getvalues();
    obj.setvalues(15,10);
    obj.getvalues();

    return 0;

}
