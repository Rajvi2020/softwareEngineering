#include <iostream>
using namespace std;

// Function to add two numbers
double add(double a, double b) {
    return a + b;
}

// Function to subtract two numbers
double subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b) {
    return a * b;
}

// Function to divide two numbers
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0; // Return 0 as a fallback
    }
    return a / b;
}

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    double result;

    // Call the function based on user input
    if (operation == '+') {
        result = add(num1, num2);
    } else if (operation == '-') {
        result = subtract(num1, num2);
    } else if (operation == '*') {
        result = multiply(num1, num2);
    } else if (operation == '/') {
        result = divide(num1, num2);
    } else {
        cout << "Invalid operation!" << endl;
        return 0;
    }

    cout << "Result: " << result << endl;

    return 0;
}