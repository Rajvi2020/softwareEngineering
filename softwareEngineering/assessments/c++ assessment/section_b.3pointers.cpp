#include <iostream>
using namespace std;

// Function to swap values using pointers
void swapValues(float *a, float *b) {
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float h1, h2;

    cout << "Enter first study hour: ";
    cin >> h1;

    cout << "Enter second study hour: ";
    cin >> h2;

    // Function call using pointers
    swapValues(&h1, &h2);

    cout << "\nAfter Swapping:\n";
    cout << "First value: " << h1 << endl;
    cout << "Second value: " << h2 << endl;

    return 0;
}
