#include <iostream>
using namespace std;

int main()
{
    // Variables
    int a = 10;
    float b = 5.5;
    char ch = 'A';

    // Constant
    const float PI = 3.14;

    // Operations
    float sum = a + b;
    float area = PI * a * a;

    cout << "Integer value: " << a << endl;
    cout << "Float value: " << b << endl;
    cout << "Character: " << ch << endl;

    cout << "Sum = " << sum << endl;
    cout << "Area of circle = " << area << endl;

    return 0;
}