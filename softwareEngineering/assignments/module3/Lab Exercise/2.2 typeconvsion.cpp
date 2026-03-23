#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 3.5;

    // Implicit Conversion
    float result1 = a + b;

    // Explicit Conversion
    int result2 = (int)b;

    cout << "Implicit Conversion (a + b) = " << result1 << endl;
    cout << "Explicit Conversion (float to int) = " << result2 << endl;

    return 0;
}