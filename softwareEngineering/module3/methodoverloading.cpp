#include<iostream>
using namespace std;

class Cal
{
    public:
    int cal(int a,int b)
    {
       return a+b;
    }
    
    int cal(int a,int b,int c)
    {
       return a*b*c;
    }
};

int main()
{
    Cal c;
    cout<<c.cal(6,5)<<endl;
    cout<<c.cal(2,3,4)<<endl;

	return 0;
}