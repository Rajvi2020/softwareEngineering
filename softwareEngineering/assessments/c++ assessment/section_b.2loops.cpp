#include <iostream>
using namespace std;

int main() {
    float hours[7];
    float total = 0, avg;

    
    cout << "Enter study hours for 7 days:\n";
    for(int i = 0; i < 7; i++) {
        cout << "Day " << i+1 << ": ";
        cin >> hours[i];
        total += hours[i];
    }

    
    avg = total / 7;

    
    cout << "\nTotal Study Hours: " << total << endl;
    cout << "Average Study Hours: " << avg << endl;

    
    if(avg < 2) {
        cout << "Warning: Your study average is low! Improve your study time.\n";
    } else {
        cout << "Good job! Keep it up.\n";
    }

    return 0;
}
