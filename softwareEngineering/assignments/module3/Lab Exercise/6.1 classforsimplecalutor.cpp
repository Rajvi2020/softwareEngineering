#include<iostream>
using namespace std;

class Calculator
{
    public:
    
    // Function for Addition
    void add(int a, int b)
    {
        cout << "Addition = " << a + b << endl;
    }
    
    // Function for Subtraction
    void subtract(int a, int b)
    {
        cout << "Subtraction = " << a - b << endl;
    }
    
    // Function for Multiplication
    void multiply(int a, int b)
    {
        cout << "Multiplication = " << a * b << endl;
    }
    
    // Function for Division
    void divide(int a, int b)
    {
        if(b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division not possible (divide by zero)" << endl;
    }
};

int main()
{
    Calculator c;   // Object creation
    
    c.add(10, 5);
    c.subtract(10, 5);
    c.multiply(10, 5);
    c.divide(10, 5);
    
    return 0;
}