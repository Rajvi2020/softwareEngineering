#include <iostream>

// The inline keyword is a suggestion to the compiler
inline int add(int a, int b) 
{
    return a + b;
}

int main() 
{
    int num1 = 5;
    int num2 = 10;
    // At this point, the compiler may replace the call with 'return 5 + 10;'
    int result = add(num1, num2); 
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}