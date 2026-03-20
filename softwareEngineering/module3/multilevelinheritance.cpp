
#include<iostream>
using namespace std;

class A
{
    public:
    void a()
    {
        cout<<"A called"<<endl;
    }
};
class B : public A
{
    public:
    void b()
    {
        cout<<"B called"<<endl;
    }
};
class C : public B
{
    public:
    void c()
    {
        cout<<"C called"<<endl;
    }
};
int main()
{
    //object creation

    C c1;
     
     //method call
     c1.a();
     c1.b();
     c1.c();

    return 0;
}
