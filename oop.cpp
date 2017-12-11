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
