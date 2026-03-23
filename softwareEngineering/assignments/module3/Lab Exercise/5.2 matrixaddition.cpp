#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], sum[2][2];

    cout << "Enter first 2x2 matrix:\n";
    for(int i = 0; i < 2; i = i + 1)
        for(int j = 0; j < 2; j = j + 1)
            cin >> a[i][j];

    cout << "Enter second 2x2 matrix:\n";
    for(int i = 0; i < 2; i = i + 1)
        for(int j = 0; j < 2; j = j + 1)
            cin >> b[i][j];

    // Add matrices
    for(int i = 0; i < 2; i = i + 1)
        for(int j = 0; j < 2; j = j + 1)
            sum[i][j] = a[i][j] + b[i][j];



    cout << "Sum Matrix:\n";
    for(int i = 0; i < 2; i = i + 1) {
        for(int j = 0; j < 2; j = j + 1)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    return 0;
}