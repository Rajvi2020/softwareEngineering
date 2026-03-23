#include<iostream>
using namespace std;

class A
{
public:
	int a1;
	void a(int a2)
	{
		a1 = a2;
	}
};
class B : public A
{
public:
	int b1;
	void b(int b2)
	{
		b1 = b2;
	}
};
class C 
{
public:
	int c1;
	void c(int c2)
	{
		c1 = c2;
	}
};
class D :public B,public C
{
    public:
    void multiply()
    {
        int ans = a1*b1*c1;
        cout<<ans<<endl;
    }
};

int main()
{
    D d;
    d.a(10);
    d.b(20);
    d.c(5);
    d.multiply();

	return 0;
}