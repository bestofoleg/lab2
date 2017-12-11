#include <iostream>
#include "oop.h"
IntegerAdder::IntegerAdder(int _a, int _b)
{
	a = _a;
	b = _b;
}
void IntegerAdder::setAB(int _a, int _b)
{
	a = _a;
	b = _b;
}
int IntegerAdder::getA()
{
	return a;
}
int IntegerAdder::getB()
{
	return b;
}
int IntegerAdder::getSum()
{
	return a+b;
}

Base::Base() { cout << "Construct Base object\n"; }
Base::~Base() { cout << "Destruct Base object\n"; }

virtual void Base::func() const { cout << "Function func() of class Base\n"; }

Child::Child() { cout << "Construct Child object\n"; }
Child::~Child() { cout << "Destruct Child object\n"; }

void Child::func() const { cout << "Function func() of class Child\n"; }

void Child::Function(const Base &obj)
{
    cout << "* Call method func() for object obj" << endl;
    obj.func();
}
