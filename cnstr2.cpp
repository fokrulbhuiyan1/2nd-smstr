class Base
{ int x;
  public:
  Base() { cout << "Base default constructor"; }
};

class Derived : public Base
{ int y;
  public:
  Derived() { cout << "Derived default constructor"; }
  Derived(int i) { cout << "Derived parameterized constructor"; }
};

int main()
{
 Base b;
 Derived d1;
 Derived d2(10);
}
