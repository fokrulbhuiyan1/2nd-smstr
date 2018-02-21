#include<iostream>
using namespace std;
class myClass{
int A , B;
static int i;
public:
void init(){
A = i++;
B = 10 + i++;
return; 	}
void display(){
cout << "private int A: " << A << endl;
cout << "private int B: " << B << endl;
cout << "private static int i: " << i << endl << endl;
return; 	}
static void show(){
cout << "static private int i: " << i << endl << endl;
} };
int myClass :: i;
int main(){
myClass :: show();
myClass t1, t2;
	cout << "object t1" << endl;
	t1.show();
	cout << "object t2" << endl;
	t2.show();
	t1.init();
	cout << "object t1" << endl;
	t1.display();
	cout << "object t1" << endl;
	t1.show();
	cout << "object t2" << endl;
	t2.show();
	t2.init();
	cout << "object t2" << endl;
	t2.display();
	myClass :: show();
	return 0;
}
