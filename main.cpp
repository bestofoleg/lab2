#include <iostream>
#include "oop.h"

using namespace std;

class Base
{
public:
    Base() { cout << "Construct Base object\n"; }
    ~Base() { cout << "Destruct Base object\n"; }

    virtual void func() const { cout << "Function func() of class Base\n"; }
};

class Child: public Base
{
public:
    Child() { cout << "Construct Child object\n"; }
    ~Child() { cout << "Destruct Child object\n"; }

    void func() const { cout << "Function func() of class Child\n"; }
};

void Function(const Base &obj)
{
    cout << "* Call method func() for object obj" << endl;
    obj.func();
}

int main(int argc, char *argv[])
{
    cout << "* Create Object base" << endl;
    Base base;

    cout << "* Create Object child" << endl;
    Child child;

    cout << "* Call method func() for object base" << endl;
    Function(base);

    cout << "* Call method func() for object child" << endl;
    Function(child);

	cout<<"1 + 1 = ";
	IntegerAdder ia(1,1);
	cout<<ia.getSum()<<endl;

    return 0;
}
