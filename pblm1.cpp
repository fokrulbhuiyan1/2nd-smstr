#include<iostream>
using namespace std;

class teacher
{
	int id=0;
public:


	void show()
	{
		cout <<"teacher id = " <<id<<endl;
	}
};

class student : public teacher
{
	int id=0;
public:

	void show()
	{
		teacher::show();
		cout << "student id = "<<id<<endl;
	}
};


int main()
{

return 0;
}
