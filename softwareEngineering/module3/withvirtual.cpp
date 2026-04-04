#include<iostream>
using namespace std;

class A
{
public:
    int x = 5;

    virtual void display()   // 👈 virtual add
    {
        cout << "Value of x is : " << x << endl;
    }
};

class B : public A
{
public:
    int y = 10;

    void display()
    {
        cout << "Value of y is : " << y << endl;
    }
};

int main()
{
    A *a;
    B b;

    a = &b;

    a->display();   // 👈 pointer thi call
    b.display();    // 👈 direct call

    return 0;
}