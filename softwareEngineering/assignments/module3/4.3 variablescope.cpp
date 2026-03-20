#include <iostream>
using namespace std;

// Global variable
int x = 10;

void demo() {
    int y = 5; // Local variable
    cout << "Inside function:" << endl;
    cout << "Global x = " << x << endl;
    cout << "Local y = " << y << endl;
}

int main() {
    int y = 20; // Local variable in main
    cout << "In main before function call:" << endl;
    cout << "Global x = " << x << endl;
    cout << "Local y = " << y << endl;

    demo(); // Call function

    cout << "In main after function call:" << endl;
    cout << "Global x = " << x << endl;
    cout << "Local y = " << y << endl;

    return 0;
}