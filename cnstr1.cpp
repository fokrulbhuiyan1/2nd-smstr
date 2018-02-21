class A
{

public:
	A()
{
    cout<<"Winged animals can flap"<<endl;
    }
};
class B:public A
{
	int b;

public:
	B()
	{
		cout<<"default B\n";
	}

};
int main()
{
	A aa;
	B bb;

	return 0;
}
