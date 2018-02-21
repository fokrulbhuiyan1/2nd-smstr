#include<iostream>
using namespace std;

class A
{
	int a,b;
public:
    A(int a=5,int b=5):a(a),b(b){}
	void show()
	{
		cout <<"A add value = " <<a+b<<endl;
	}
};

class B : public A
{
	int x,y;
public:
    B(int x=0,int y=0):x(x),y(y){}

	void show()
	{
		A::show();
		cout << "B add value = "<<x+y<<endl;
	}
};

int main(){

  A *pr1;
  A aa(50,100);

  pr1 = &aa;
  pr1->show();

  B bb(10,20);
  pr1 = &bb;
  pr1->show();

  B *pr2;
  pr2 = &bb;
  pr2->show();

return 0;
}
