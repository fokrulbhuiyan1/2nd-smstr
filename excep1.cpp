#include<iostream>
using namespace std;

int main()
{
	int m;
	cin>>m;
	try	{
		if(m==0) throw m;
		cout<<200/m<<endl;
	}
	catch(int x)
	{
		cout<<"exception int occured for:"<<x<<endl;
	}
	catch(double d)
	{
		cout<<"exception for double"<<d<<endl;
      }
	cout<<"end\n";
	return 0;
}
