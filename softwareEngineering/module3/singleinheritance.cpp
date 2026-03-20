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
int main()
{
    //object creation

     B b1;
     
     //method call
     b1.a();
     b1.b();

    return 0;
}