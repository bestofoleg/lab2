#ifndef oop_H
#define oop_H

class IntegerAdder
{
	private:
		int a,b;
    public:
        IntegerAdder(int _a, int _b);
        void setAB(int _a, int _b);
        int getA();
        int getB();
        int getSum();
};

class Base
{
public:
    Base();
    ~Base();

    virtual void func() const;
};

class Child: public Base
{
public:
    Child();
    ~Child();

    void func() const;
};

void Function(const Base &obj);

#endif /*oop.h*/
