#include<iostream>
using namespace std;

class Cal
{
    public:
    int cal(int a,int b)
    {
       return a+b;
    }
    
    double cal(double a,double b)
    {
       return a*b;
    }
};

int main()
{
    Cal c;
    cout<<c.cal(6,5)<<endl;
    cout<<c.cal(2.00,3.00)<<endl;

	return 0;
}