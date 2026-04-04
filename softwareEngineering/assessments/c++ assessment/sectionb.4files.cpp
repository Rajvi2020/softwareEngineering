#include <iostream>
#include <fstream>
using namespace std;

class StudyGoals {
public:

    // Function to save goals
    void saveGoal() {
        ofstream file("..//goals.txt", ios::app);

        string goal;
        cout << "Enter your study goal: ";
        cin.ignore();
        getline(cin, goal);

        file << goal << endl;
        file.close();

        cout << "Goal Saved Successfully!\n";
    }

    // Function to display goals
    void displayGoals() {
        ifstream file("..//goals.txt");
        string goal;

        cout << "\n--- Your Study Goals ---\n";

        while(getline(file, goal)) {
            cout << "- " << goal << endl;
        }

        file.close();
    }
};

int main() {
    StudyGoals sg;
    int choice;

    do {
        cout << "\n1. Add Study Goal\n2. View Goals\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1)
            sg.saveGoal();
        else if(choice == 2)
            sg.displayGoals();

    } while(choice != 3);

    return 0;
}
