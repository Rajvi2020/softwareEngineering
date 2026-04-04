#include<iostream>
using namespace std;

class A
{
    public:
    int x = 5;  
    
    void display()  
    {  

        std::cout << "Value of x is : " << x<<std::endl;  
    }  
};
class B : public A
{
     public:
     int y = 10;  
     
     void display()  
    {  
        std::cout << "Value of y is : " <<y<<std::endl;  
    }  
};


int main()
{
    A *a;
    B b;
    a = &b;  
    a->display();   
    b.display();
  
    
    return 0;
}