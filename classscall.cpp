#include<iostream>
using namespace std;
class set
{
	int m,n;
public:
	void setdata(int x,int y)
	{
		m=x,n=y;
	}
	void show(int x)
	{
		cout<<x<<endl;
	}
	void largest()
	{
		if(m>n) show(m);
		else show(n);
	}
};
int main()
{
	set s;
	s.setdata(5,10);
	s.largest();
	s.show(5);
	return 0;
}
