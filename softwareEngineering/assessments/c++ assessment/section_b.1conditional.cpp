#include <iostream>
using namespace std;

int main() {
    float hours;

    cout << "Enter your study hours today: ";
    cin >> hours;

    if(hours == 0) {
        cout << "No study today  Try to start with small steps!";
    }
    else if(hours > 0 && hours <= 2) {
        cout << "Good start  Keep improving!";
    }
    else if(hours > 2 && hours <= 5) {
        cout << "Nice work  You're doing well!";
    }
    else {
        cout << "Excellent 🔥Keep it up!";
    }

    return 0;
}