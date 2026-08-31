#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of matrix: ";
    cin >> n;

    // Number of elements required
    int size = n * (n + 1) / 2;

    // 1D array to store only lower triangular elements
    int arr[size];

    cout << "Enter lower triangular elements row-wise:\n";

    int k = 0;

    // Input lower triangular elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> arr[k];
            k++;
        }
    }

    cout << "\nLower Triangular Matrix:\n";

    k = 0;

    // Display complete matrix
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            if (i >= j) {
                cout << arr[k] << " ";
                k++;
            }
            else {
                cout << "0 ";
            }
        }

        cout << endl;
    }

    return 0;
}