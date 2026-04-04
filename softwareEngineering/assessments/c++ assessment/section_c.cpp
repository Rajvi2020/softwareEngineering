#include <iostream>
#include <fstream>
using namespace std;

class Tracker {
public:

    // Log data
    void logHours() {
        int day;
        float hours;

        cout << "Enter Day (1-7): ";
        cin >> day;

        cout << "Enter Hours: ";
        cin >> hours;

        ofstream file("..//data.txt", ios::app); // open file
        file << day << " " << hours << endl; // write
        file.close();

        cout << "Saved!\n";
    }

    // Show report
    void report() {
        ifstream file("..//data.txt");

        int d;
        float h, total = 0;

        cout << "\n--- Report ---\n";

        while(file >> d >> h) {
            cout << "Day " << d << ": " << h << " hrs\n";
            total += h;
        }

        cout << "Total: " << total << endl;
        cout << "Average: " << total / 7 << endl;

        file.close();
    }
};

int main() {
    Tracker t;
    int ch;

    do {
        cout << "\n1. Log Hours\n2. Report\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        if(ch == 1)
            t.logHours();
        else if(ch == 2)
            t.report();

    } while(ch != 3);

    return 0;
}