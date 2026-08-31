#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of matrix: ";
    cin >> n;

    // Total non-zero elements in Tri-Diagonal Matrix = 3n - 2
    int arr[3 * n - 2];

    cout << "Enter elements of Lower Diagonal:\n";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    cout << "Enter elements of Main Diagonal:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[n - 1 + i];
    }

    cout << "Enter elements of Upper Diagonal:\n";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[2 * n - 1 + i];
    }

    cout << "\nTri-Diagonal Matrix:\n";

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            // Lower Diagonal
            if (i == j + 1) {
                cout << arr[i - 1] << " ";
            }

            // Main Diagonal
            else if (i == j) {
                cout << arr[n - 1 + i] << " ";
            }

            // Upper Diagonal
            else if (j == i + 1) {
                cout << arr[2 * n - 1 + i] << " ";
            }

            // All other elements
            else {
                cout << "0 ";
            }
        }

        cout << endl;
    }

    return 0;
}