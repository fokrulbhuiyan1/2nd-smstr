#include<iostream>
using namespace std;
class myClass{
	int A , B;
public:
	void set( int i , int j ){
		A = i; B = j;
	}
	void show(){
		cout << "A: " << A << endl;
		cout << "B: " << B << endl;
	}
};
int main(){
	myClass o1 , o2 , *o3;
	o1.set( 10 , 20 );
	cout << "Object o1:" << endl;
	o1.show();
	o2 = o1;
	cout << "Object o2:" << endl;
	o2.show();
	o3 = &o1;
	cout << "Object Pointer o3:" << endl;
	o3->show();
	return 0;
}
