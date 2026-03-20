#include<iostream>
using namespace std;

class Bank
{
    public:
    void bank()
    {
        cout<<"banking"<<endl;
    }
};

class Current : public Bank
{
    public:
    void current()
    {
        cout<<"current"<<endl;
    }
};
class Save  : public Bank
{
    public:
    void save()
    {
        cout<<"saving"<<endl;
    }
};


int main()
{
    Current c;
    Save s;
    
    c.current();
    s.save();
    c.bank();
    s.bank();
    
    return 0;
   
}
